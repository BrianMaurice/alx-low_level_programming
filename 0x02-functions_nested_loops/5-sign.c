#include "main.h"

/**
* print_sign - prints the sign of a number
* @n: character to test
* Return: 1 and pints + if n is greater than zero
* 0 and prints 0 if n is zero
* -1 and prints if - and n is less that zero
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('-');
		return ('/');
	}
}
