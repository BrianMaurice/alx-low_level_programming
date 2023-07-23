#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: is the number of times the character should be printed
 * Return: Nothing
 */
void print_diagonal(int n)
{
	int i, j;

	if (n >= 0)
	{
		if (n == 0)
		{
			_putchar('\n');
		}
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				if (j != 1)
				{
					_putchar(' ');
				}
				if (j == i)
				{
					_putchar('\\');
					_putchar('\n');
				}
			}
		}
	}
	if (n < 0)
	{
		_putchar('\n');
	}
}
