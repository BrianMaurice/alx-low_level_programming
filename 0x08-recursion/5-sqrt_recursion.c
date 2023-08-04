#include "main.h"
/**
 * square_root - compares the number entered with the base
 * @n: the number to find the square
 * @number: is the number whereby the squareroot is calculated
 * Return: natural square root of number n
 */
int square_root(int n, int number)
{
	if (n * n == number)
		return (n);
	if (n * n > number)
		return (-1);
	return (square_root(n + 1, number));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square
 * Return: natural square root of a number
 */
int _sqrt_recursion(int n)
{
	return (square_root(1, n));
}
