#include "main.h"

/**
* print_alphabet - prints all letters in the alphabet
* Return: Nothing
*/
void print_alphabet(void)
{
	char letters = 'a';

	while (letters <= 'z')
	{
		_putchar(letters);

		letters++;
	}
	_putchar('\n');
}
