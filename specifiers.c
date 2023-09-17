#include "main.h"

/**
 * specifiers - function specifiers.
 *
 * @con_spec: Conversion specifiers.
 * @args: arguments.
 * this function specify the letter will be used by 
 * printf again  we use marco va_list because 
 * we don't know how may letter will pass to our fun
 * Return: char count.
 */

int specifiers(char con_spec, va_list args)
{
	int i = 0;
	int result = 0;
/*accessing struct sympoles by pasing 2 elements*/
/* the letter and the function to be executed*/
	sympoles spec[] = {
		{'d', number_print},
		{'i', number_print},
		{0, NULL}
	};
/* loop for each element in variable list args do */
	while (spec[i].specifiers)
	{
/*if comming letter == allowed letters in struct*/
		if (con_spec == spec[i].specifiers)
/*assign result of operation to the function that f pointer point to*/
			result += spec[i].f(args);
		i++;
	}

	if (result == 0)
	{
		result += _putchar('%');
		result += _putchar(con_spec);
	}

	return (result);
}
