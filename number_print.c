#include "main.h"
#include <unistd.h>
/**
 * number_print - print integers.
 *
 * @args: argument.
 *
 * Return: count of chars.
 */
int number_print(va_list args)
{
/*create a function that wiil take a number of arguments*/
/*unknown arguments will pass so we use*/
/*va_list macro*/
	int decimal = 1;
/*flage sign to assign if + or -*/
	int final_res = 0;
/*holding next value in the vairable list args*/
	long int next = va_arg(args, int);
	long int number;
/*if number negative value frist put the sign -*/
/*then print the nuber*/
	if (next < 0)
	{
		final_res += _putchar('-');
		next *= -1;
	}
/*simply put the number + 48 to get its ASCII code*/
	if (next < 10)
	{
		return (final_res += _putchar(next + '0'));
	}
/*if number is 2 digits we can not use our _putchar()*/
/* so we will using again ASCII conversion to getting*/
/* the right value here using another var number*/
/* in case next value bigger than 9 assign it to number var*/
/*then do conversion*/
	number = next;
	while (number > 9)
	{
		decimal *= 10;
		number /= 10;
	}
/*in case number  > 1 mean + not -*/
	while (decimal >= 1)
	{
		final_res += _putchar(((next / decimal) % 10) + '0');
		decimal /= 10;
	}
	return (final_res);
}
