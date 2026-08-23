#!/usr/bin/env python3
"""Commit changed DSA solutions one at a time and push them to origin/main."""

from __future__ import annotations

import re
import subprocess
import sys
from pathlib import Path


REPO_ROOT = Path(__file__).resolve().parent.parent
SOLUTIONS_DIR = REPO_ROOT / "practice" / "solutions"
HEADER = re.compile(r"^(?:#|//|/\*)\s*([^:]+?)\s*:\s*(.+?)\s*(?:\*/)?$")
SOLUTION_SUFFIXES = {".py", ".cpp"}


def git(*arguments: str, capture: bool = False) -> str:
    result = subprocess.run(
        ["git", *arguments],
        cwd=REPO_ROOT,
        check=True,
        stdout=subprocess.PIPE if capture else None,
        text=True,
    )
    return result.stdout if capture else ""


def git_paths(*arguments: str) -> set[Path]:
    result = subprocess.run(
        ["git", *arguments],
        cwd=REPO_ROOT,
        check=True,
        stdout=subprocess.PIPE,
    )
    return {
        REPO_ROOT / item.decode("utf-8")
        for item in result.stdout.split(b"\0")
        if item
    }


def changed_solution_paths() -> list[Path]:
    tracked = git_paths(
        "diff",
        "--name-only",
        "-z",
        "--diff-filter=ACMR",
        "HEAD",
        "--",
        "practice/solutions",
    )
    untracked = git_paths(
        "ls-files",
        "--others",
        "--exclude-standard",
        "-z",
        "--",
        "practice/solutions",
    )
    deleted = git_paths(
        "diff",
        "--name-only",
        "-z",
        "--diff-filter=D",
        "HEAD",
        "--",
        "practice/solutions",
    )
    if deleted:
        names = ", ".join(str(path.relative_to(REPO_ROOT)) for path in sorted(deleted))
        raise RuntimeError(f"Deleted solutions require a manual commit: {names}")

    paths = tracked | untracked
    unsupported = sorted(
        path
        for path in paths
        if path.name != ".gitkeep" and path.suffix not in SOLUTION_SUFFIXES
    )
    if unsupported:
        names = ", ".join(str(path.relative_to(REPO_ROOT)) for path in unsupported)
        raise RuntimeError(f"Unsupported files in solutions directory: {names}")

    return sorted(
        path for path in paths if path.name != ".gitkeep" and path.suffix in SOLUTION_SUFFIXES
    )


def commit_message(path: Path) -> str:
    for line in path.read_text(encoding="utf-8").splitlines()[:10]:
        match = HEADER.match(line.strip())
        if match:
            topic, title = (part.strip() for part in match.groups())
            return f"{topic}: added {title}"
    relative_path = path.relative_to(REPO_ROOT)
    raise RuntimeError(f"No '<topic>: <title>' header found in {relative_path}")


def validate_repository() -> None:
    branch = git("branch", "--show-current", capture=True).strip()
    if branch != "main":
        raise RuntimeError(f"Expected branch 'main', but currently on '{branch}'.")

    try:
        git("rev-parse", "--verify", "origin/main", capture=True)
    except subprocess.CalledProcessError as error:
        raise RuntimeError("The origin/main branch is not configured.") from error

    unpushed = git("rev-list", "--count", "origin/main..main", capture=True).strip()
    if unpushed != "0":
        raise RuntimeError(
            "Local main already has unpushed commits. Push or resolve them before 'just push'."
        )


def main() -> int:
    try:
        validate_repository()
        paths = changed_solution_paths()
        messages = [(path, commit_message(path)) for path in paths]

        if not messages:
            print("No changed solution files to commit.")
            return 0

        for path, message in messages:
            relative_path = path.relative_to(REPO_ROOT)
            git("add", "--", str(relative_path))
            git("commit", "--only", "-m", message, "--", str(relative_path))
            print(f"Committed {relative_path}: {message}")

        git("push", "origin", "main")
        print(f"Pushed {len(messages)} solution commit(s) to origin/main.")
        return 0
    except (OSError, RuntimeError, subprocess.CalledProcessError) as error:
        print(f"Error: {error}", file=sys.stderr)
        return 1


if __name__ == "__main__":
    raise SystemExit(main())
