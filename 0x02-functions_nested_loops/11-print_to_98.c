#include "main.h"
#include <stdio.h>

/**
* print_to_98 - prints all natural numbers from n t0 98
* @n: is the value of natural number from which all operations start
* Return: Nothing
*/
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n < 98; n++)
		{
			printf("%d, ", n);
		}
		printf("%d\n", 98);
	}
	else
	{
		for (n = n; n > 98; n--)
		{
			printf("%d, ", n);
		}
		printf("%d\n", 98);
	}
}
