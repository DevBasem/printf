#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
	int num1 = 12345;
	int custom_result, standard_result;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("%-\n");
	_printf("%-\n");
	printf("%-\n");
	printf("%-\n");
	_printf("testing%\n");
	printf("testing%\n");
	_printf("this is hard\n");
	printf("this is hard\n");
	_printf("%s\n", "NULL");
	printf("%s\n", "NULL");
	_printf("Unknown:[%r]\n");
	printf("Unknown:[%r]\n");
	_printf(NULL);
	_printf("\0");
	printf("\0");
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	printf("Testing _printf against printf:\n");
	custom_result = _printf("Custom: %d\n", num1);
	standard_result = printf("Standard: %d\n", num1);
	printf("Custom Result: %d\n", custom_result);
	printf("Standard Result: %d\n", standard_result);
	printf("\n");
	return (0);
}
