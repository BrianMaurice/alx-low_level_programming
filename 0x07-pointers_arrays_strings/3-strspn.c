#include "main.h"

/**
 * _strspn - gets teh length of a prefix substring
 * @s: consists of bytes from accept
 * @accept: pointer to string
 * Return: Returns the number of bytes in the initial segement of s
 * which cosists only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
	{
		unsigned int i, j;

		i = 0;
		while (s[i] != '\0')
		{
			j = 0;
			while (accept[j] != '\0' && s[i] != accept[j])
				j++;
			if (accept[j] == '\0')
				return (i);
			i++;
		}
		return (i);
	}
