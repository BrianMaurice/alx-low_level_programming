#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @c: pointer to a string
 * Return: capitalized string
 */
char *cap_string(char *c)
{
	int i, j;
	char sp[] = " \t\n,;.!?\"(){}";

	i = 1;
	if (c[0] >= 'a' && c[0] <= 'z')
		c[0] -= ('a' - 'A');
	while (c[i] != '\0')
	{
		for (j = 0; sp[j] != '\0'; j++)
			if (c[i - 1] == sp[j] && (c[i] >= 'a' && c[i] <= 'z'))
				c[i] -= ('a' - 'A');
		i++;
	}
	return (c);
}
