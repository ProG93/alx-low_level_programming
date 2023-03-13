#include "main.h"
#include <stdlib.h>

/**
 * free_grid - allocates for a grid of integers
 * @grid: 2D grid
 * @height: height of the grid
 * Return: Null or the grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
