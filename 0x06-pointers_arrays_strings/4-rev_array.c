#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverses the content of an array
 * @n: number of elements of the array
 * @a: array of integers
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int x, y, z;

	y = 0;
	z = n - 1;
	while (y < z)
	{
		x = *(a + y);
		*(a + y) = *(a + z);
		*(a + z) = x;
		y++;
		z--;
	}
}
