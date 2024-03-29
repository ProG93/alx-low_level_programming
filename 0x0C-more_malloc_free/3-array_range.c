#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* array_range - array of integers
* @min: minimum
* @max: maximum
* Return: array
*/

int *array_range(int min, int max)
{
	int *array, i = 0, s = min;

	if (min > max)
		return (0);
	array = malloc((max - min + 1) * sizeof(int));

	if (!array)
		return (0);
	while (i <= max - min)
		array[i++] = s++;
	return (array);
}
