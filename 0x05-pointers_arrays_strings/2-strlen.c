#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: takes the value of string and calculates length
 * Return: Returns the length of a string
 */
int _strlen(char *s)
{
	int a;

	a = 0;
	while (*s != '\0')
	{
		a++;
		s++;
	}
	return (a);
}
