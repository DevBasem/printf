#include "main.h"
/**
 * print_char - Prints a char.
 * @c: character to be printed.
 * @char_count: total number of characters printed.
 * Return: Number of chars printed.
 */
void print_char(char c, int *char_count)
{
	write(1, &c, 1);
	(*char_count)++;
}
/**
 * print_string - Prints a string.
 * @str: string to be printed.
 * @char_count: total number of characters printed.
 * Return: Number of chars printed.
 */
void print_string(const char *str, int *char_count)
{
	if (str)
	{
		int len = 0;

		while (str[len] != '\0')
		{
			len++;
		}
		write(1, str, len);
		(*char_count) += len;
	}
	else
	{
		print_string("(null)", char_count);
	}
}
/**
 * print_string - Prints a string.
 * @str: string to be printed.
 * @char_count: total number of characters printed.
 * Return: Number of chars printed.
 */
 int print_int(va_list args)
 {
 	int decimal = 1;
	int final_res = 0;
	long int next = va_arg(args, int);
	long int number;
	if (next < 0)
	{
		final_res += _putchar('-');
		next *= -1;
	}
	if (next < 10)
	{
		return (final_res += _putchar(next + '0'));
	}
	number = next;
	while (number > 9)
	{
		decimal *= 10;
		number /= 10;
	}
	while (decimal >= 1)
	{
		final_res += _putchar(((next / decimal) % 10) + '0');
		decimal /= 10;
	}
	return (final_res);
}	
