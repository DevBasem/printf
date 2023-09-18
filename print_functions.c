#include "main.h"

/**
 * print_char - Prints a char.
 * @c: character to be printed.
 * @count: total number of characters printed.
 * Return: Number of chars printed.
 */
int print_char(int c, int *count)
{
	unsigned char character = (unsigned char)c;

	if (write(STDOUT_FILENO, &character, 1) == -1)
		return (-1);
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
	size_t len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;

	if (write(STDOUT_FILENO, str, len) == -1)
	{
		return (-1);
	}

	(*count) += len;
	return (*count);
}

/**
 * print_percent - Prints a percent sign.
 * @count: total number of characters printed.
 * Return: Number of chars printed
 */
int print_percent(int *count)
{
	char percent = '%';

	if (write(STDOUT_FILENO, &percent, 1) == -1)
	{
		return (-1);
	}
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
		char minus = '-';

		if (write(STDOUT_FILENO, &minus, 1) == -1)
			return (-1);
		(*count)++;
		num = -num;
	}
	if (num == 0)
	{
		char zero = '0';

		if (write(STDOUT_FILENO, &zero, 1) == -1)
			return (-1);
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
			char digit = '0' + digits[j];

			if (write(STDOUT_FILENO, &digit, 1) == -1)
				return (-1);
			(*count)++;
		}
	}
	return (*count);
}
