#include <stdio.h>

/**
* main - Smile in the mirror
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char alphabets = 'z';

	while (alphabets >= 'a')
	{
		putchar(alphabets);

		alphabets--;
	}
	putchar('\n');

	return (0);
}
