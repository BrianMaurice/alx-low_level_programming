#include <stdio.h>

/**
* main - prints alphabets in capitals and small letters
*
* Return: Always 0 (Succes)
*/
int main(void)
{
	char letters = 'a';
	char LETTERS = 'A';

	while (letters <= 'z')
	{
		putchar(letters);

		letters++;
	}
	while (LETTERS <= 'Z')
	{
		putchar(LETTERS);

		LETTERS++;
	}
	putchar('\n');
	return (0);
}
