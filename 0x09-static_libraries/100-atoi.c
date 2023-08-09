#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: points to the string to be converted
 * Return: the converted string
 */
int _atoi(char *s)
{
	int i, negative, final_result;
	short boolean;

	i = negative = final_result = boolean = 0;
	negative = -1;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			negative *= -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			final_result *= 10;
			final_result -= (s[i] - '0');
			boolean = 1;
		}
		else if (boolean == 1)
			break;
		i++;
	}
	final_result *= negative;
	return (final_result);
}
