#include "main.h"
/**
 * print_char - Prints a char.
 * @c: character to be printed.
 * @char_count: total number of characters printed.
 * Return: Number of chars printed.
 */
int print_char(char c, int *char_count)
{
	if (write(1, &c, 1) != 1)
	{
		return (-1);
	}
	(*char_count)++;
	return (0);
}
/**
 * print_string - Prints a string.
 * @str: string to be printed.
 * @char_count: total number of characters printed.
 * Return: Number of chars printed.
 */
int print_string(const char *str, int *char_count)
{
	if (str)
	{
		int len = 0;

		while (str[len] != '\0')
		{
			len++;
		}

		if (write(1, str, len) != len)
		{
			return (-1);
		}
		(*char_count) += len;
		return (0);
	}
	else
	{
		return (print_string("(null)", char_count));
	}
}
