#include <stdio.h>
/**
 * main - prints its name, followed by a new line
 * @argc: argument count
 * @argv: argument vectors
 * Return: Always 0 on success
 */
int main(int argc, char *argv[])
{
	argc--;/*ensures all arguments are used*/
	printf("%s\n", argv[0]);
	return (0);
}
