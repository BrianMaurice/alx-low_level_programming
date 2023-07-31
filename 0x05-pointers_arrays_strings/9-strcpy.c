#include "main.h"

/**
 * _strcpy - copies the string pointed by src to dest
 * @dest: pointer to dest string
 * @src: pointer to src string
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
