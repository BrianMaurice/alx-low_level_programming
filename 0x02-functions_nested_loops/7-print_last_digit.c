#include "main.h"
#include <limits.h>

/**
* print_last_digit - Prints the last digit of a number
* @a: character to be tested
* Return: value of the last digit
*/
int print_last_digit(int a)
{
	if (a < 0 && a >= -1025)
	{
		a = a * -1;
	}
	else if (a == INT_MIN)
	{
		a = (a % 10);
		a = 0 - a;
	}
	_putchar((a % 10) + '0');
	return (a % 10);
}
