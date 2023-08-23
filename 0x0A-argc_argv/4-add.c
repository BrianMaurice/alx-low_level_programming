#include <stdio.h>
#include <stdlib.h>
/**
 * is_positive_integer - checks whether a character is a positive integer
 * @str: pointer to a string of characters
 * Return: 0 if number is less thatn 0 or if number is greater than 9
 */
int is_positive_integer(const char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/**
 * custom_atoi - converts charater to integer
 * @str: pointer to a string
 * Return: result
 */
int custom_atoi(const char *str)
{
	int result = 0;

	while (*str)
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result);
}
/**
 * main - adds the integers and prints result
 * @argc: counter to arguments entered
 * @argv: array containing arguments
 * Return: 0 when true and 1 when an error occurs
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (is_positive_integer(argv[i]))
		{
			sum += custom_atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);
	return (0);
}

