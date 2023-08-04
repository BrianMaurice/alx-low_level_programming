#include "main.h"

/**
 * prime_number - checks for the prime number
 * @n: number to be recursed
 * @number: number to check for prime
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int prime_number(int n, int number)
{
	if (number % n == 0 || number < 2)
		return (0);
	else if (n == number - 1)
		return (1);
	else if (number > n)
		return (prime_number(n + 1, number));
	return (1);
}

/**
 * is_prime_number - checks if number is prime
 * @n: is the number to be checked
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	return (prime_number(2, n));
}
