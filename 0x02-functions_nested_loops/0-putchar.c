#include "main.h"

/**
* main - Prints _putchar, followed by a new line
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char c[] = "_putchar";

	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(c[i]);
	}

	_putchar('\n');

	return (0);

}
