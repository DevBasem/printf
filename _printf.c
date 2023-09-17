#include "main.h"

/**
 * _printf -  a custom function that works like c standard printf.
 * @format: list of types of arguments.
 *
 * Return: Nothing.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);

	while (*format)
	{
		if (*format != '%')
		{
			print_character(*format, &count);
		}
		else
		{
			format++;
			switch (*format)
			{
				case 'c':
					print_character(va_arg(args, int), &count);
					break;
				case 's':
					print_string(va_arg(args, const char *), &count);
					break;
				case 'd':
				case 'i':
					print_integer(va_arg(args, int), &count);
					break;
				case '%':
					print_character('%', &count);
					break;
				default:
					print_character('%', &count);
					print_character(*format, &count);
					break;
			}
		}
		format++;
	}

	va_end(args);
	return (count);
}
