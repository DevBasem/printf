# Printf Function Implementation

This repository contains an implementation of the `printf` function in C, which allows you to format and print various types of data to the standard output. The `printf` function is widely used in C programming for formatted printing.

## Table of Contents
- [Description](#description)
- [Usage](#usage)
- [Functionality](#functionality)
- [How to Compile](#how-to-compile)
- [Examples](#examples)

## Description

The `printf` function in this implementation provides similar functionality to the standard `printf` in C. It supports the following format specifiers:
- `%c`: Print a character.
- `%s`: Print a string.
- `%d` or `%i`: Print an integer.
- `%b`: Print an unsigned integer in binary format.
- `%%`: Print a percent sign.

## Usage

To use the `printf` function in your C program, include the `main.h` header file and call the `_printf` function, providing the format string and any necessary arguments. Here's an example:

```c
#include "main.h"

int main(void) {
    int char_count;

    char_count = _printf("Hello, %s! You have %d apples.\n", "John", 42);
    return (0);
}
```

## Functionality

- `print_char`: Prints a character.
- `print_string`: Prints a string.
- `print_int`: Prints an integer.
- `print_binary`: Prints an unsigned integer in binary format.
- `handle_format_specifier`: Handles format specifiers and delegates printing to the appropriate functions.
- `_printf`: The main printf function that takes the format string and variable arguments.

## How to Compile

Compile your program with the provided main.c file and your source files. For example:

```bash
gcc -Wall -Werror -Wextra -pedantic main.c your_file.c -o your_program
```

## Examples

Here are some example usages of the printf function:

```c
_printf("Hello, %s!\n", "World");
_printf("The answer is %d.\n", 42);
_printf("Binary representation of %d is %b.\n", 10, 10);
_printf("A percent sign: %%\n");
```
