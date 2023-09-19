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

	if (format == NULL)
	{
		return (-1);
	}

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			if (handle_format_specifier(&format, args, &char_count) == -1)
			{
				va_end(args);
				return (-1);
			}
		}
		else
		{
			if (print_char(*format, &char_count) == -1)
			{
				va_end(args);
				return (-1);
			}
		}
		format++;
	}

	va_end(args);
	return (char_count);
}
