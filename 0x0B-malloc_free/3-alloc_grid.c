#include "main.h"
/**
 * alloc_grid - function that returns a pointer
 * @width: coloms
 * @height: rows
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **bim;
	int i, z;

	if (width <= 0 || height <= 0)
		return (NULL);

	bim = malloc(sizeof(int *) * height);

	if (bim == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		bim[i] = malloc(sizeof(int) * width);

		if (bim[i] == NULL)
		{
			for (; i >= 0; i--)
				free(bim[i]);

			free(bim);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (z = 0; z < width; z++)
			bim[i][z] = 0;
	}

	return (bim);
}
