#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: charachter
 * Return: 0
 */
char *_strdup(char *str)
{
	char *bim;
	int i, k = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	bim = malloc(sizeof(char) * (i + 1));

	if (bim == NULL)
		return (NULL);

	for (k = 0; str[k]; k++)
		bim[k] = str[k];

	return (bim);
}
