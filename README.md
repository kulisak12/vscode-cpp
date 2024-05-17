# VS Code C++

This repository provides a configuration for building and debugging C++ projects in Visual Studio Code.
It assumes a workflow of creating many single-file projects.

## Quick Start

### C++ Extension

Install the C++ extension for Visual Studio Code.
Open the Quick open field (`Ctrl+E`) and run the following command:

```
ext install ms-vscode.cpptools
```

### Launch

To build and run a project, open its source file and press `F5`.
It will create an executable in the project directory and run it.
By default, the program reads from a file `in.txt` in the project directory and writes to the integrated terminal.

The recommended workflow is to create a new directory for each project.
The `sum` directory contains an example project that calculates the sum of integers in a file.

## Customization

### C++ Standard

The configuration uses C++17 by default.
To change the C++ standard, edit the following:

- `C_Cpp.default.cppStandard` setting in `.vscode/settings.json`
- `CXX_FLAGS` variable in `Makefile`

### Command Line Arguments

To configure the file that the program reads from, or pass other command line arguments, edit the `args` array in `.vscode/launch.json`.
