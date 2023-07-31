#include "main.h"
/**
 * _strstr - function that locates a substring
 * @haystack: fonction to search from
 * @needle: function to search in
 * Return: the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i	= haystack;
		char *j = needle;

		while (*i == *j && *j != '\0')
		{
			i++;
			j++;
		}

		if (*j == '\0')
			return (haystack);
	}

	return (0);
}
