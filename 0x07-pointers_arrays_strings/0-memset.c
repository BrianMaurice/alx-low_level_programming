#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: points to a string
 * @b: constant to fill the multid array
 * @n: no of bytes to be filled with constant bytes
 * Return: Returns a pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
