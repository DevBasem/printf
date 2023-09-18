#include "main.h"
/**
 * print_char - Prints a char.
 * @c: character to be printed.
 * @count: total number of characters printed.
 * Return: Number of chars printed.
 */
int print_char(int c, int *count)
{
	putchar(c);
	(*count)++;
	return (*count);
}
/**
 * print_string - Prints a string.
 * @str: string to be printed.
 * @count: total number of characters printed.
 * Return: Number of chars printed.
 */
int print_string(const char *str, int *count)
{
	while (*str)
	{
		putchar(*str);
		(*count)++;
		str++;
	}
	return (*count);
}
/**
 * print_percent - Prints a percent sign.
 * @count: total number of characters printed.
 * Return: Number of chars printed
 */
int print_percent(int *count)
{
	putchar('%');
	(*count)++;
	return (*count);
}
/**
 * print_integer - Prints an integer.
 * @num: number to be printed.
 * @count: total number of characters printed.
 * Return: Number of chars printed.
 */
int print_integer(int num, int *count)
{
	int j;
	int digits[10];
	int i = 0;

	if (num < 0)
	{
		putchar('-');
		(*count)++;
		num = -num;
	}
	if (num == 0)
	{
		putchar('0');
		(*count)++;
	}
	else
	{
		while (num > 0)
		{
			digits[i] = num % 10;
			num /= 10;
			i++;
		}
		for (j = i - 1; j >= 0; j--)
		{
			putchar('0' + digits[j]);
			(*count)++;
		}
	}
	return (*count);
}
