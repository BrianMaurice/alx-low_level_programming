#include "main.h"

/**
* _islower - Checks for lowercase character.
* @c: character to be tested.
* Return: 1 if c is lowercase or 0 is c is uppercase
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
