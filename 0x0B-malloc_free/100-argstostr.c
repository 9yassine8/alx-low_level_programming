#include "main.h"
/**
 * argstostr - function that concatenates all the arguments
 * @ac: input
 * @av: double pointer
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i, k, j = 0, x = 0;
	char *bim;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (k = 0; av[i][k]; k++)
			x++;
	}
	x += ac;

	bim = malloc(sizeof(char) * x + 1);
	if (bim == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (k = 0; av[i][k]; k++)
	{
		bim[j] = av[i][k];
		j++;
	}
	if (bim[j] == '\0')
	{
		bim[j++] = '\n';
	}
	}
	return (bim);
}
