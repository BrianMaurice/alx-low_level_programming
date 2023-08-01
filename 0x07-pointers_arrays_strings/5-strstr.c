#include "main.h"
#include <stddef.h>

/**
 * _strncmp - Compares two strints within bytes.
 * @s1: string to check
 * @s2: string to check from
 * @b: number of bytes to check
 * Return: 0 if strings are the same
 * any other number if they are different.
 */
int _strncmp(char *s1, char *s2, unsigned int b)
{
	unsigned int i;

	for (i = 0; i <= b && *s1 == *s2 && *s1 != '\0' && *s2 != '\0'; i++)
	{
		s1++;
		s2++;
	}
	return (i - b);
}
/**
 * _strstr - locates a substring
 * @haystack: pointer to a string
 * @needle: pointer to a string
 * Return: Returns a pointer to the beginning of the loacted substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int len;
	/*obtain the length of the needle for strcmp*/
	len = 0;
	while (needle[len] != '\0')
		len++;
	/*compare to substring*/
	while (*haystack != '\0')
	{
		if (_strncmp(haystack, needle, len) == 0)
			return (haystack);
		haystack++;
	}
	return (NULL);
}
