#include "main.h"

/**
 * _strcmp -  compares two strings
 * @s1: pointer for string 1
 * @s2: pointer for string 2
 * Return: Difference of characters that are not same
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'  && s1[i] == s2[i]; i++)
		;
	return (s1[i] - s2[i]);
}
