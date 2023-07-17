#include <stdio.h>

/**
* main - Print letter and space without q and e
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char letters = 'a';

	while (letters <= 'z')
	{
		if (letters == 'e' || letters == 'q')
		{
			letters++;
			letters--;
		} else
		{
			putchar(letters);
		}
		letters++;
	}
	putchar('\n');
	return (0);
}
