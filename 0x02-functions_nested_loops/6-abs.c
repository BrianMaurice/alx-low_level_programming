#include "main.h"

/**
* _abs - computes the absolute value of an integer
* @c: charater under test
* Return: Always 0 (Success)
*/
int _abs(int c)
{
	if (c < 0)
	{
		c = c * -1;
	}
	return (c);
}
