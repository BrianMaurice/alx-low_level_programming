#include <stdio.h>
#include <stdlib.h>

/**
 * main - mutliplies two numbers
 * @argc: argment count
 * @argv: argument vector
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
	int a, b;

	a = b = 0;
	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
		return (0);
	}
	else
		printf("Error\n");
	return (1);
}
