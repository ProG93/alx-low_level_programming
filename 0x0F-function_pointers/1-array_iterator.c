#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function of array
 * @array: element of array
 * @size: size of array
 * @action: execute fuction
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array || size > 0 || action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
