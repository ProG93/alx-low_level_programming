#include "function_pointers.h"
#include <stdio.h>i

/**
 * int_index - function that searches interger
 * @array: array of integers
 * @size: number of elements in an array
 * @cmp: pointer to function
 * Return: 0 return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, x;

	x = -1
	if (array && cmp)
	{
		if (size <= 0)
		{
			return (x);
		}
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
			if (cmp(array[i]) > 0)
			{
				x = i;
				break;
			}
			if ((cmp(array[i]) == (-1)))
			{
				return (x);
			}
		}
	}
	return (x);
}
