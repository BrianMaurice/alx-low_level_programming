#include <stdio.h>

/**
* main - Print all single digit numbers of base 10 from 0
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int numbers = 0;

	while (numbers < 10)
	{
		printf("%d", numbers);
		numbers++;
	}
	printf("\n");

	return (0);
}
