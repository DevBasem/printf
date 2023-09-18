#include "main.h"

/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */
int _printf(const char *format, ...)
{
	int char_count = 0;
	va_list args;

	va_start(args, format);
	if (format == NULL)
	{
		return -1;
	}
	while (*format)
	{
		if (*format == '%')
		{
			handle_format_specifier(&format, args, &char_count);
		}
		else
		{
			print_char(*format, &char_count);
		}
		format++;
	}

	va_end(args);
	return char_count;
}
