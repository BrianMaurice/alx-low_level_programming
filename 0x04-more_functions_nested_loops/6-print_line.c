#include "main.h"

/**
* print_line - Draws a straignt line in the terminal
* @n: checks the number of times the character should be printed
* Return: Nothing
*/

void print_line(int n)
{
	int i;

	for (i = 0; i <= n; ++i)
	{
		if (i > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
