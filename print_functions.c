#include "main.h"

/**
 * print_character -  prints a character.
 * @c: character to be printed.
 * @count: track the length of the output.
 *
 * Return: Nothing.
 */
void print_character(char c, int *count)
{
	putchar(c);
	(*count)++;
}
/**
 * print_string -  prints a string.
 * @str: string to be printed.
 * @count: track the length of the output.
 *
 * Return: Nothing.
 */
void print_string(const char *str, int *count)
{
	const char *s;

	if (str == NULL)
	{
		str = "(null)";
	}
	for (s = str; *s; s++)
	{
		putchar(*s);
		(*count)++;
	}
}
/**
 * print_integer -  prints an integer.
 * @num: list of types of arguments.
 * @count: track the length of the output.
 *
 * Return: Nothing.
 */
void print_integer(int num, int *count)
{
	int reversed = 0;
	int digits = 0;

	if (num == 0)
	{
		putchar('0');
		(*count)++;
		return;
	}

	if (num < 0)
	{
		putchar('-');
		(*count)++;
		num = -num;
	}

	while (num > 0)
	{
		int digit = num % 10;

		reversed = reversed * 10 + digit;
		num /= 10;
		digits++;
	}

	while (digits > 0)
	{
		int digit = reversed % 10;

		putchar('0' + digit);
		(*count)++;
		reversed /= 10;
		digits--;
	}
}
