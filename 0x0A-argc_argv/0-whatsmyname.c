#include <stdio.h>

/**
 * main -  program that prints its name
 * @argc: count argument
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}