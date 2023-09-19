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
	int result1, result2;
	char *str = "Hello, World!";
	char *null_str = NULL;
	char *empty_str = "";
	char ch = 'B';
	char c = 'A';

	printf("Testing specifier 'c':\n");
	result1 = printf("Printf: %c\n", c);
	result2 = _printf("MyPrintf: %c\n", c);
	printf("Expected: %d, Actual: %d\n", result1, result2);

	printf("\nTesting specifier 's':\n");
	result1 = printf("Printf: %s\n", str);
	result2 = _printf("MyPrintf: %s\n", str);
	printf("Expected: %d, Actual: %d\n", result1, result2);

	printf("\nTesting specifier '%%':\n");
	result1 = printf("Printf: %%\n");
	result2 = _printf("MyPrintf: %%\n");
	printf("Expected: %d, Actual: %d\n", result1, result2);

	printf("\nTesting NULL string:\n");
	result1 = printf("Printf: %s\n", null_str);
	result2 = _printf("MyPrintf: %s\n", null_str);
	printf("Expected: %d, Actual: %d\n", result1, result2);

	printf("\nTesting empty string:\n");
	result1 = printf("Printf: %s\n", empty_str);
	result2 = _printf("MyPrintf: %s\n", empty_str);
	printf("Expected: %d, Actual: %d\n", result1, result2);

	printf("\nTesting mixed specifiers:\n");
	result1 = printf("Printf: %c, %s, %%\n", ch, str);
	result2 = _printf("MyPrintf: %c, %s, %%\n", ch, str);
	printf("Expected: %d, Actual: %d\n", result1, result2);

	return (0);
}
