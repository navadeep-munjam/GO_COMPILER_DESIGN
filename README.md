# Intermediate Code Generator (ICG)

This project is an Intermediate Code Generator (ICG) implemented using Lex and Yacc. The purpose of this tool is to generate intermediate code representations for source code written in a specific language.

## Getting Started

### Prerequisites

Before running the ICG, ensure you have the following installed:

- Lex (Flex)
- Yacc (Bison)
- C++ compiler (e.g., g++)

### Installation

1. Clone this repository to your local machine:

    ```
    git clone https://github.com/navadeep-munjam/GO_COMPILER_DESIGN.git
    ```

2. Navigate to the project directory:

    ```
    cd GO_COMPILER_DESIGN
    ```

3. Compile the Lex and Yacc files using make:

    ```
    make
    ```

### Usage

After successfully compiling the project, you can run the generated executable with the input source code file as an argument. For example, assuming your test case is located in the test directory and named test3_for.go, you can run:

    ```
    ./gocompiler ./test/test3_for.go
    ```

    Replace `./test/test3_for.go` with the path to your source code file.

### Cleaning Up

To clean up the generated files, you can use the following command:

    ```
    make clean
    ```

    This will remove the intermediate files generated during compilation.

