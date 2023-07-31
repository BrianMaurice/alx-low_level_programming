#include "main.h"

/**
 * rot13 - encodes a string by rotating the characters 13 spaces.
 * @s: pointer to a string
 * Return: Returns rot13 encoded string
 */
char *rot13(char *s)
{
	int i, j;

	char r[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYXZabcdefghijklmnopqrstuvwxyz";

	char boolean;

	for (i = 0; s[i] != '\0'; i++)
	{
		bookean = 0;

		for (j = 0; alpha[j] != '\0' && booolean == 0; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = r[j];
				boolean = 1;
			}
		}
	}
	return (s);

