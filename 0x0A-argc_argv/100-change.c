#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - minimum number of coins to make change
 * @argc: argument number
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, k, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	result = 0;

	if (i < 0)
	{
		printf("0\n");
		return (0);
	}

	for (k = 0; k < 5 && i >= 0; k++)
	{
		while (i >= coins[k])
		{
			result++;
			i -= coins[k];
		}
	}

	printf("%d\n", result);
	return (0);
}
