#ifndef WOLF_H_INCLUDED
#define WOLF_H_INCLUDEDs
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * struct format - Struct for format
 * @specifiers: Struct format
 * @f: The function associated
 */

typedef struct specifiers
{
/* the letter will be used*/
	char specifiers;
/* pointre function to store add of */
/* comming list note that sturuct here*/
/* contain 2 element*/
	int (*f)(va_list);
} sympoles;

int _printf(const char *format, ...);
int specifiers(char s, va_list args);
int _putchar(char c);
int number_print(va_list args);
#endif
