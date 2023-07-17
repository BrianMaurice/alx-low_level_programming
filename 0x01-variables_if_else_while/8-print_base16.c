#include <stdio.h>

/**
* main - Print all the numbers of base 16 in lowercase
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int numbers = 0;

	while (numbers < 10)
	{
		putchar('0' + numbers);

		numbers++;
	}
	numbers = 'a';
	while (numbers <= 'f')
	{
		putchar(numbers);

		numbers++;
	}
	putchar('\n');

	return (0);
}
