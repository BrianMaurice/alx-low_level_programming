#include <stdio.h>

/**
* main - print all single digit numbers of
* base 10 starting from 0 using putchar
*
* Return: Always 0 (Sucess)
*/
int main(void)
{
	int numbers = 0;

	while (numbers < 10)
	{
		putchar('0' + numbers);

		numbers++;
	}
	putchar('\n');

	return (0);
}
