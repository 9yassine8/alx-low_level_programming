#include "main.h"
/**
 * free_grid - function that frees a 2 dimensional grid
 * @grid: 2d grid
 * @height: height
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
