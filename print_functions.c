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
 * @n: Integer to be printed.
 * @char_count: Total number of characters printed.
 * Return: 0 on success, -1 on error.
 */
int print_int(int n, int *char_count)
{
	int is_negative = 0;
	char buffer[12];
	long unsigned int i = 0;
	long unsigned int j;

	if (n == INT_MIN)
	{
		const char min_str[] = "-2147483648";

		return (print_string(min_str, char_count));
	}
	if (n < 0)
	{
		is_negative = 1;
		n = -n;
	}
	while (n > 0)
	{
		if (i >= sizeof(buffer))
		{
			errno = EOVERFLOW;
			return (-1);
		}
		buffer[i++] = '0' + (n % 10);
		n /= 10;
	}
	if (is_negative)
	{
		if (i >= sizeof(buffer))
		{
			errno = EOVERFLOW;
			return (-1);
		}

		buffer[i++] = '-';
	}
	for (j = 0; j < i / 2; j++)
	{
		char temp = buffer[j];

		buffer[j] = buffer[i - j - 1];
		buffer[i - j - 1] = temp;
	}
	return (print_string(buffer, char_count));
}
