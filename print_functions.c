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
	int digits, temp, divisor, digit, i;

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
		return;
	}

	digits = 0;
	temp = num;
	while (temp > 0)
	{
		temp /= 10;
		digits++;
	}

	divisor = 1;
	for (i = 1; i < digits; i++)
	{
		divisor *= 10;
	}

	while (divisor > 0)
	{
		digit = num / divisor;
		putchar('0' + digit);
		(*count)++;
		num %= divisor;
		divisor /= 10;
	}
}
