#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: passes the string to be reversed
 * Return: Nothing
 */
void rev_string(char *s)
{
	int a, b;

	char c [1000];

	a = b = 0;

	while (s[a] != '\0')
	{
		c[a] = s[a];
		a++;
	}
	a--;
	while (a >= 0)
	{
		s[a] = c[b];
		a--;
		b++;
	}
	s[b++] = '\0';
}
