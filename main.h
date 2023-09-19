#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <stdarg.h>
#include <errno.h>
#include <limits.h>
int handle_format_specifier(const char **format,
		va_list args, int *char_count);
int print_char(char c, int *char_count);
int print_string(const char *str, int *char_count);
int print_int(int n, int *char_count);
int _printf(const char *format, ...);
#endif /* MAIN_H */
