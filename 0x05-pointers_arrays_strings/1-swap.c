#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: swaps the value of a
 * @b: swaps the value of b
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
