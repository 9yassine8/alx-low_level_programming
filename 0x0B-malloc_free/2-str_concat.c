#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: input 1
 * @s2: input 2
 * Return: point to a newly allocated space
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	char *concat;
	int mar = 0;
	int bim = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0' ; i++)
		mar++;
	for (i = 0; s2[i] != '\0' ; i++)
		bim++;
	concat = malloc(sizeof(char) * (mar + bim) +1);
	if (concat == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0' ; i++)
		concat[i] = s1[i];
	for (i = 0; s2[i] != '\0' ; i++)
		concat[mar+i] = s2[i];
	return (concat);
}

	
