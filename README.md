# ft_printf
![C](https://img.shields.io/badge/language-C-blue)
![Formatting](https://img.shields.io/badge/technology-Formatting-red)
![42School](https://img.shields.io/badge/school-42-orange)

## Table of Contents
- [Introduction](#introduction)
- [Important Concepts](#important-concepts)
- [Key Learning Outcomes](#key-learning-outcomes)
- [Objectives](#objectives)
- [Common Instructions](#common-instructions)
- [Project Requirements](#project-requirements)
- [Installation / Compile / Run](#installation--compile--run)
- [Example Usage](#example-usage)
- [Additional Resources](#additional-resources)

## Introduction
The `ft_printf` project aims to reimplement the standard C library function `printf`. It involves parsing a format string and handling various format specifiers to print different types of arguments. This project provides a deeper understanding of variadic functions, formatted output, and string manipulation in C.

## Important Concepts
- **Variadic Functions**: Functions that accept a variable number of arguments, using `stdarg.h`.
- **Format Specifiers**: Characters that define the type and format of the data to be printed, such as `%d` for integers, `%s` for strings, etc.
- **Buffer Management**: Efficiently handling buffers to store the formatted output before printing.

## Key Learning Outcomes
- **Parsing Strings**: Learn to parse and interpret format strings to identify and handle different format specifiers.
- **Handling Variadic Arguments**: Understand how to use `va_list`, `va_start`, `va_arg`, and `va_end` to handle variadic arguments.
- **Formatted Output**: Gain skills in formatting different types of data and managing output buffers.
- **Error Handling**: Develop strategies for managing errors and edge cases in string formatting and output.

## Objectives
- **Implement Basic Specifiers**: Handle basic format specifiers like `%c`, `%s`, `%d`, `%i`, `%u`, `%x`, and `%X`.
- **Advanced Specifiers**: Implement more complex specifiers like `%p` for pointers and handle flags, width, and precision.
- **Buffer Management**: Implement efficient buffer management to construct the formatted string before output.
- **Error Handling**: Ensure robust error handling for invalid format strings and specifiers.

## Common Instructions
- **Code Norm**: Adhere to the 42 coding standard.
- **Memory Management**: Properly manage all heap-allocated memory to avoid leaks.
- **Makefile**: Provide a Makefile with rules for `all`, `clean`, `fclean`, and `re`.
- **No Global Variables**: Use only local variables.

## Project Requirements
The `ft_printf` function should mimic the behavior of the standard `printf` function. It should handle the following specifiers:
- `%c`: Character
- `%s`: String
- `%p`: Pointer
- `%d`/`%i`: Integer
- `%u`: Unsigned integer
- `%x`/`%X`: Hexadecimal

## Installation / Compile / Run
1. ⬇️ Clone the repository:
    ```sh
    git clone https://github.com/lbelet/printf.git
    cd ft_printf
    ```
2. 🔧 Compile the project:
    ```sh
    make
    ```
3. 🛠️ Compile with a test file:
    ```sh
    gcc -o test_ft_printf test_ft_printf.c libftprintf.a
    ```
4. ▶️ Run the test program:
    ```sh
    ./test_ft_printf
    ```

## Example Usage
▶️ Example usage in a test program:
```c
#include "ft_printf.h"

int main() {
    int num = 42;
    char *str = "Hello, World!";
    ft_printf("Number: %d, String: %s\n", num, str);
    return 0;
}
```
This will output:

```
  Number: 42, String: Hello, World!
```

## Additional Resources
- [Variadic Functions in C](https://www.cprogramming.com/tutorial/c/lesson17.html)
- [Format Specifiers](https://en.cppreference.com/w/c/io/fprintf)
- [Buffer Management in C](https://www.tutorialspoint.com/cprogramming/c_strings.htm)
