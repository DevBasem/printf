#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <stdarg.h>
void handle_format_specifier(const char **format, va_list args, int *char_count);
void print_char(char c, int *char_count);
void print_string(const char *str, int *char_count);
int _printf(const char *format, ...);
#endif /* MAIN_H */
