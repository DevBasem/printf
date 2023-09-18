#include "main.h"

/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					print_char(va_arg(args, int), &count);
					break;
				case 's':
					print_string(va_arg(args, char *), &count);
					break;
				case '%':
					print_percent(&count);
					break;
				case 'd':
				case 'i':
					print_integer(va_arg(args, int), &count);
					break;
				default:
					print_char('%', &count);
					print_char(*format, &count);
					break;
			}
		}
		else
			print_char(*format, &count);
		format++;
	}
	va_end(args);
	return (count);
}
