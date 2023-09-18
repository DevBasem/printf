#include "main.h"

/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */
int _printf(const char *format, ...)
{
	int char_count = 0;
	int percent_flag = 0;
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
			if (percent_flag)
			{
				print_char('%', &char_count);
				percent_flag = 0;
			} 
			else
			{
				handle_format_specifier(&format, args, &char_count);
				percent_flag = 1;
			}
		}
		else
		{
			print_char(*format, &char_count);
			percent_flag = 0;
		}
		format++;
	}

	va_end(args);
	return (char_count);
}
