#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - prints dimensional array of integers
 * @width: number of rows
 * @height: number columns
 * Return: NULL
 */

int **alloc_grid(int width, int height)
{
	int *d;
	int i, k;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);
	d = (int **) malloc(height * sizeof(d));
	if (d == NULL)
	{
		free(d);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		d[i] = malloc(width * sizeof(int));
		if (d[i] == NULL)
		{
			for (k = 0; k < width; k++)
			{
				d[i][k] = 0;
			}
			return (d);
		}
	}
}
