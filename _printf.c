#include "main.h"
#include <unistd.h>
/**
 *_printf - our_fun
 *
 *@format: data and its specifier
 *passing a variable arguments using ...
 *sart iteration using pointer mechanism
*because va_list is a struct in AMD defension conatin pointers
*think in it as functions not pointers so start just to start count
****************************************************************
*call specifer function for current index that will
*calll number_print function for integers
*assinging result to printed
 *Return: count of chars.
 */
int _printf(const char *format, ...)
{
	int i = 0, result = 0, printed;

	va_list args;

	va_start(args, format);

	/*checking printf formate */
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	/*if true */
	while (format[i])
	{
		printed = 0;
		/*if _putchar == '%' */
		if (format[i] == '%')
		{ /*break if no data after '%' */
			if (!format[i + 1] || (format[i + 1] == ' ' && !format[i + 2]))
			{
				result = -1;
				break;
			}
			printed += specifiers(format[i + 1], args);
			/*if there is no result yet still print any */
			/*char befor '%' */
			if (printed == 0)
			{
				result += _putchar(format[i + 1]);
			}
			if (printed == -1)
			{
				result = -1;
			}
			i++;
		}
		else
		{
			/*if else statement */
			/*if resulte ==-1 putchar the frist index data : else*/
			/*+1 then print data after % */
			(result == -1) ? (_putchar(format[i])) : (result += _putchar(format[i]));
		}
		i++;
		/*print final result */
		if (result != -1)
			result += printed;
	}
	/*clean the stack*/
	va_end(args);
	return (result);
}
