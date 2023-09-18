#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <stdarg.h>
int print_char(int c, int *count);
int print_string(const char *str, int *count);
int print_percent(int *count);
int print_integer(int num, int *count);
int _printf(const char *format, ...);
#endif /* MAIN_H */
