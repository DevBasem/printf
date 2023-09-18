#include "main.h"
/**
 * print_char - Prints a char.
 * @c: character to be printed.
 * @count: total number of characters printed.
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
 * @count: total number of characters printed.
 * Return: Number of chars printed.
 */
void print_string(const char *str, int *char_count)
{
    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    write(1, str, len);
    (*char_count) += len;
}
