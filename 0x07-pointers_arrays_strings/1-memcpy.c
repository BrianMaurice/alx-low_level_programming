#include "main.h"

/**
 * _memcpy - copies menory area
 * @dest: pointer to dest file
 * @src: pointer to src file
 * @n: no of bytes to be copied
 * Return: Returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
