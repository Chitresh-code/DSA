# Practice workspace

Edit one of the files in `scratch/`, put your test case in `input.txt`, and run
`./run` from the repository root. Output is written to `output.txt` and printed
in the terminal.

The first ten lines of a scratch file must contain a comment in this format:

```text
<topic>: <title>
```

For example, `# Dynamic Programming: Longest Common Subsequence` archives a
Python file as `solutions/python/dynamic_programming/longest_common_subsequence.py`.
The equivalent `//` comment works for C++. Spaces and punctuation become
underscores, names are lowercase, and an existing file at the same path is
overwritten.

Commands:

```sh
./run        # most recently edited scratch file
./run py     # Python
./run cpp    # C++17
```
