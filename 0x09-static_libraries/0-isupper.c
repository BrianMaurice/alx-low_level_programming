#include "main.h"

/**
* _isupper - Checks for uppercase character
* @c: tested character for uppercase or lowercase
* Return: Always 0 (Sucess)
*/

int _isupper(int c)
{
	c = c;

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
