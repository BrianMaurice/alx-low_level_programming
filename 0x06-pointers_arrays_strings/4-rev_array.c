#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer to the array
 * @n: number of elements of the array
 * Return: Reversed array
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	i = temp = 0;

	n -= 1;

	while (i <= n)
	{
		temp = a[n];
		a[n--] = a[i];
		a[i++] = temp;
	}
}
