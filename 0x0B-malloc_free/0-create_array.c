#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that creates an array
 * @size: size of array
 * @c: char to store
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	int j;

	ptr = malloc(sizeof(char) * size);
	if (size == 0 || ptr == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
		ptr[j] = c;
	return (ptr);
}
