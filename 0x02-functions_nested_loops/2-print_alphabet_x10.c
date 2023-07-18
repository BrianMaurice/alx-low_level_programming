#include "main.h"

/**
* print_alphabet_x10 - prints alphabets ten times
* Return: nothing
*/
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char letters = 'a';

		while (letters <= 'z')
		{
			_putchar(letters);

			letters++;
		}
		_putchar('\n');
	}
}
