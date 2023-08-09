#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: pointer to a dest string
 * @src: pointer to a src string
 * @n: no of bytes to be copied
 * Return: Returns the destinations string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i] = src[i];
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
