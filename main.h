#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <stdarg.h>
int _putchar(char c);
void print_character(char c, int *count);
void print_string(const char *str, int *count);
void print_integer(int num, int *count);
int _printf(const char *format, ...);
#endif
