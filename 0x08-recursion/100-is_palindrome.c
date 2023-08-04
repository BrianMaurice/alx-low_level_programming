#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to string
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
	return (0);
}
/**
 * checker - gives input for is_palindrome is_palindrome funcion
 * @str: pointer to the string
 * @len: gets the length of the string
 * @count: checks the count during recursion
 * Return: 1 if string is a palindrome and 0 if not
 */
int checker(char *str, int len, int count)
{
	if (count >= len)
		return (1);
	if (str[len] == str[count])
		return (checker(str, len - 1, count + 1));
	return (0);
}
/**
 * is_palindrome - checks whether a string is a palindrome
 * @s: pointer to the string
 * Return: 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);
	int count = 0;

	return (checker(s, len - 1, count));
}
