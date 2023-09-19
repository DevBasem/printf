#include "main.h"
/**
 * handle_format_specifier - handels the specifier.
 * @format: the format of the function.
 * @args: arguments.
 * @char_count: total number of characters printed.
 * Return: Number of chars printed.
 */
void handle_format_specifier(const char **format,
		va_list args, int *char_count)
{
	(*format)++;

	if (**format == '\0')
	{
		return;
	}

	if (**format == 'c')
	{
		char c = va_arg(args, int);

		print_char(c, char_count);
	}
	else if (**format == 's')
	{
		char *str = va_arg(args, char *);

		print_string(str, char_count);
	}
	else if (**format == '%')
	{
		print_char('%', char_count);
	}
	else
	{
		print_char('%', char_count);
		print_char(**format, char_count);
	}
}
