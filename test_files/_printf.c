#include "main.h"

/**
 * printf -  prints charcter, string or %.
 * @format: list of types of arguments.
 *
 * Return: Nothing.
 */
int _printf(const char *format, ...)
{
	int count = 0;
	const char *str;
	va_list args;

	va_start(args, format);

	while (*format)
	{
		if (*format != '%')
		{
			putchar(*format);
			count++;
		}
		else
		{
			format++;
			switch (*format)
			{
				case 'c':
					putchar(va_arg(args, int));
					count++;
					break;
				case 's':
					for (str = va_arg(args, const char *);
						*str; str++)
					{
						putchar(*str);
						count++;
					}
					break;
				case '%':
					putchar('%');
					count++;
					break;
				default:
					putchar('%');
					putchar(*format);
					count += 2;
					break;
			}
		}
		format++;
	}

	va_end(args);
	return (count);
}
