#include "main.h"

/**
* _isdigit - checks for a digit (0 through 0)
* @c: checked to see if it is a digit between 0 and 9
* Return: 1 if c is a digit and 0 otherwise
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
