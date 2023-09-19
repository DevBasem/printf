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

/**
 * print_int - Prints an integer.
 * @n: integer to be printed.
 * @char_count: total number of characters printed.
 * Return: Number of chars printed.
 */
int print_int(int n, int *char_count)
{
	int len = 0;
	char buffer[12];
	int i;

	if (n == 0)
	{
		return (print_char('0', char_count));
	}

	if (n == INT_MIN)
	{
		if (print_string("-2147483648", char_count) == -1)
		{
			return (-1);
		}
		return (11);
	}
	if (n < 0)
	{
		n = -n;
		len += print_char('-', char_count);
	}
	while (n > 0)
	{
		buffer[len++] = '0' + (n % 10);
		n /= 10;
	}
	for (i = len - 1; i >= 0; i--)
	{
		if (print_char(buffer[i], char_count) == -1)
		{
			return (-1);
		}
	}
	return (len);
}

/**
 * print_binary - Prints an unsigned integer in binary format.
 * @n: unsigned integer to be printed in binary.
 * @char_count: total number of characters printed.
 * Return: Number of chars printed.
 */
int print_binary(unsigned int n, int *char_count)
{
	int len = 0;
	char buffer[33];
	int start = 0;
	int i;

	if (n == 0)
	{
		return (print_char('0', char_count));
	}
	if (n > UINT_MAX)
	{
		return (-1);
	}
	for (i = 31; i >= 0; i--)
	{
		buffer[len++] = (n & (1U << i)) ? '1' : '0';
	}

	while (start < len && buffer[start] == '0')
	{
		start++;
	}
	for (i = start; i < len; i++)
	{
		if (print_char(buffer[i], char_count) == -1)
		{
			return (-1);
		}
	}
	return (len - start);
}
