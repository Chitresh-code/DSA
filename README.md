# DSA Practice Environment

This repository provides a clean C++ and Python environment for solving data structures and algorithms problems in Visual Studio Code.

The setup is inspired by Striver's Visual Studio Code workflow for DSA:

- [Video: VS Code Setup for C++, CP, and DSA](https://www.youtube.com/watch?v=h3uDCJ5mvgw&list=PLgUwDviBIf0oF6QL8m22w1hIDC1vJ_BHz&index=2)
- [Article: How to Set Up Visual Studio Code for C++, CP, and DSA](https://takeuforward.org/set-up/how-to-set-up-visual-studio-code-for-c-cp-and-dsa)

This repository goes one step further by reducing the amount of setup and manual file management required while you practice. It gives you:

- A simple environment with one scratch file for each language.
- A familiar input, output, and code structure that emulates platforms such as LeetCode and CodeChef.
- One command or one button press to run your code.
- An organized history of every problem you solve.
- One command to commit and push your solutions with consistent messages.



## How it works

Write your solution in either `practice/scratch/run.py` or `practice/scratch/run.cpp`. Test input is read from `practice/input.txt`, and program output is written to `practice/output.txt`.

Each scratch file starts with a comment that identifies the topic and problem:

```python
# Arrays: Two Sum
```

```cpp
// Dynamic Programming: Longest Common Subsequence
```

The text before `:` becomes the topic directory. The text after `:` becomes the solution filename. Names are converted to lowercase, and spaces or punctuation are replaced with underscores.

For example, the headers above create:

```text
practice/solutions/python/arrays/two_sum.py
practice/solutions/cpp/dynamic_programming/longest_common_subsequence.cpp
```

Running the same problem again overwrites the existing solution instead of creating a duplicate.

## Prerequisites

Install the following tools before using this repository:

- [Git](https://git-scm.com/downloads)
- [Visual Studio Code](https://code.visualstudio.com/)
- Python 3
- A C++ compiler with C++17 support, such as `g++` or `clang++`
- [Just](https://github.com/casey/just), which is used for the solution push command

You can confirm that the command line tools are available by running:

```sh
git --version
python3 --version
c++ --version
just --version
```

Windows users should run this project through WSL or another shell environment that can execute the `run` shell script.

## Setup



### 1. Fork the repository

Fork this repository on GitHub so that you have your own copy where you can track and push your solutions.

### 2. Clone your fork

Replace `<your-username>` with your GitHub username:

```sh
git clone https://github.com/<your-username>/dsa.git
cd dsa
```



### 3. Open the project in Visual Studio Code

```sh
code .
```

Visual Studio Code will recommend the extensions used by this workspace. Install the recommended extensions when prompted. The built-in Run button uses the Python Debugger extension, while Code Runner provides an optional Run Code button.

You can also install it manually from the Extensions view by searching for `Code Runner`.

### 4. Verify the runner

Add a valid topic and title comment to one of the scratch files, place some test data in `practice/input.txt`, and run:

```sh
./run py
```

Use `./run cpp` when testing the C++ scratch file.

## Solving a problem



### 1. Choose a scratch file

Use one of the following files:

- `practice/scratch/run.py` for Python
- `practice/scratch/run.cpp` for C++



### 2. Add the problem header

Add a comment within the first ten lines of the file:

```text
<topic>: <title>
```

The word `Problem` is not required. These are all valid:

```text
Recursion: Problem 8
Arrays: Two Sum
Trees: Maximum Depth of Binary Tree
```



### 3. Add test input

Write your test case in:

```text
practice/input.txt
```

Your code reads this file through standard input, so regular `input()` and `cin` statements work without any changes.

### 4. Run the solution

Run the most recently edited scratch file:

```sh
./run
```

You can also choose the language explicitly:

```sh
./run py
./run cpp
```

The result is printed in the terminal and saved to `practice/output.txt`. The source code is also copied to its organized location under `practice/solutions`.

## Running from Visual Studio Code

Open a Python or C++ file and press the triangle **Run** button in the editor. The workspace checks the active file type and runs the matching scratch file automatically.

- A Python file runs `./run py`.
- A C++ file runs `./run cpp`.

The built-in Run and Debug button uses the **Run active DSA file** workspace configuration. The file is saved before the command runs, and the output appears in the integrated terminal.

## Committing and pushing solutions

When you are ready to save your progress to GitHub, run:

```sh
just push
```

This command:

1. Finds changed Python and C++ files inside `practice/solutions`.
2. Creates a separate commit for each changed solution.
3. Builds the commit message from the solution header.
4. Pushes the new commits from `main` to `origin/main`.

For example:

```text
Arrays: Two Sum
```

creates this commit message:

```text
Arrays: added Two Sum
```

The command does not stage files outside `practice/solutions`. Deleted solutions and unsupported file types require a manual commit. The command also stops if your local `main` branch already contains other unpushed commits.

## Repository structure

```text
dsa/
├── run
├── justfile
├── README.md
├── .vscode/
│   ├── extensions.json
│   ├── launch.json
│   └── settings.json
└── practice/
    ├── input.txt
    ├── output.txt
    ├── runner.py
    ├── push.py
    ├── scratch/
    │   ├── run.py
    │   └── run.cpp
    └── solutions/
        ├── python/
        └── cpp/
```



## Troubleshooting



### The Run button asks you to select a debugger

Make sure you opened the repository folder in Visual Studio Code, not an individual file. Then choose **Run active DSA file** from the run configuration menu. Visual Studio Code will remember the selection for later runs.

### No topic and title header was found

Add a comment such as `# Arrays: Two Sum` or `// Arrays: Two Sum` within the first ten lines of the scratch file.

### No C++ compiler was found

Install `g++` or `clang++`, then confirm that `c++ --version` works in your terminal.

### The `just` command was not found

Install Just by following its [installation instructions](https://github.com/casey/just#installation), then run `just --version` to confirm the installation.
