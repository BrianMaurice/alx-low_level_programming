#include <stdio.h>

/**
* main - prints all possible combinations of single-digit numbers
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int numbers = 0;

	while (numbers <= 9)
	{
		putchar('0' + numbers);

		if (numbers == 9)
		{
			numbers++;
		} else
		{
			putchar(',');

			putchar(' ');

			numbers++;
		}
	}
	putchar('\n');

	return (0);
}
