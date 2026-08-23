#!/usr/bin/env python3
"""Run and archive the Python/C++ DSA scratch files."""

from __future__ import annotations

import re
import shutil
import subprocess
import sys
import tempfile
from pathlib import Path


PRACTICE_DIR = Path(__file__).resolve().parent
REPO_ROOT = PRACTICE_DIR.parent
INPUT_FILE = PRACTICE_DIR / "input.txt"
OUTPUT_FILE = PRACTICE_DIR / "output.txt"
SOURCES = {
    "py": PRACTICE_DIR / "scratch" / "run.py",
    "cpp": PRACTICE_DIR / "scratch" / "run.cpp",
}

# Examples: "# Recursion: Problem 8" and "// Arrays: Two Sum".
HEADER = re.compile(
    r"^(?:#|//|/\*)\s*([^:]+?)\s*:\s*(.+?)\s*(?:\*/)?$",
    re.IGNORECASE,
)


def usage() -> str:
    return "Usage: ./run [py|cpp|run.py|run.cpp|path-to-active-file]"


def choose_source(argument: str | None) -> Path:
    if argument:
        key = argument.lower().removeprefix("./")
        aliases = {
            "py": "py",
            "python": "py",
            "run.py": "py",
            "cpp": "cpp",
            "c++": "cpp",
            "run.cpp": "cpp",
        }
        if key in aliases:
            return SOURCES[aliases[key]]

        # VS Code passes the active editor path. The extension tells us which
        # scratch file to run while keeping the same command-line workflow.
        suffix = Path(argument).suffix.lower()
        suffix_aliases = {".py": "py", ".cpp": "cpp", ".cc": "cpp", ".cxx": "cpp"}
        if suffix in suffix_aliases:
            return SOURCES[suffix_aliases[suffix]]
        raise ValueError(usage())

    return max(SOURCES.values(), key=lambda path: path.stat().st_mtime_ns)


def slugify(value: str, label: str) -> str:
    slug = re.sub(r"[^a-z0-9]+", "_", value.lower()).strip("_")
    if not slug:
        raise ValueError(f"The {label} must contain a letter or number.")
    return slug


def archive_source(source: Path) -> Path:
    lines = source.read_text(encoding="utf-8").splitlines()
    match = None
    for line in lines[:10]:
        match = HEADER.match(line.strip())
        if match:
            break

    if match is None:
        example = "# Recursion: Problem 8" if source.suffix == ".py" else "// Arrays: Two Sum"
        raise ValueError(
            f"Add a '<topic>: <title>' header near the top of {source.name}.\n"
            f"Example: {example}"
        )

    topic, title = match.groups()
    topic_slug = slugify(topic, "topic")
    title_slug = slugify(title, "title")
    language = "python" if source.suffix == ".py" else "cpp"
    destination = (
        PRACTICE_DIR
        / "solutions"
        / language
        / topic_slug
        / f"{title_slug}{source.suffix}"
    )
    destination.parent.mkdir(parents=True, exist_ok=True)
    shutil.copyfile(source, destination)
    return destination


def run_python(source: Path) -> int:
    with INPUT_FILE.open("rb") as stdin, OUTPUT_FILE.open("wb") as output:
        result = subprocess.run(
            [sys.executable, str(source)],
            cwd=REPO_ROOT,
            stdin=stdin,
            stdout=output,
            stderr=subprocess.STDOUT,
            check=False,
        )
    return result.returncode


def find_cpp_compiler() -> str:
    for compiler in ("g++", "clang++", "c++"):
        path = shutil.which(compiler)
        if path:
            return path
    raise RuntimeError("No C++ compiler found. Install g++ or clang++ and try again.")


def run_cpp(source: Path) -> int:
    compiler = find_cpp_compiler()
    with tempfile.TemporaryDirectory(prefix="dsa-build-") as build_directory:
        executable = Path(build_directory) / "solution"
        compile_result = subprocess.run(
            [compiler, "-std=c++17", "-Wall", "-Wextra", str(source), "-o", str(executable)],
            cwd=REPO_ROOT,
            stdout=subprocess.PIPE,
            stderr=subprocess.STDOUT,
            check=False,
        )
        if compile_result.returncode:
            OUTPUT_FILE.write_bytes(compile_result.stdout)
            return compile_result.returncode

        with INPUT_FILE.open("rb") as stdin, OUTPUT_FILE.open("wb") as output:
            result = subprocess.run(
                [str(executable)],
                cwd=REPO_ROOT,
                stdin=stdin,
                stdout=output,
                stderr=subprocess.STDOUT,
                check=False,
            )
        return result.returncode


def main() -> int:
    if len(sys.argv) > 2:
        print(usage(), file=sys.stderr)
        return 2

    try:
        source = choose_source(sys.argv[1] if len(sys.argv) == 2 else None)
        archived_to = archive_source(source)
        return_code = run_python(source) if source.suffix == ".py" else run_cpp(source)
    except (OSError, RuntimeError, ValueError) as error:
        print(f"Error: {error}", file=sys.stderr)
        return 2

    print(f"Ran {source.relative_to(REPO_ROOT)}")
    print(f"Saved {archived_to.relative_to(REPO_ROOT)}")
    print(f"Output written to {OUTPUT_FILE.relative_to(REPO_ROOT)}")
    output_bytes = OUTPUT_FILE.read_bytes()
    if output_bytes:
        print("\n--- output.txt ---")
        print(output_bytes.decode("utf-8", errors="replace"), end="")
        if not output_bytes.endswith(b"\n"):
            print()

    if return_code:
        print(f"Program exited with status {return_code}", file=sys.stderr)
    return return_code


if __name__ == "__main__":
    raise SystemExit(main())
