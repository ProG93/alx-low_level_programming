#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverses the content of an array
 * @n: number of elements of the array
 * @a: array of integers
 * Return: Always 0
 */

void reverse_array(int *a, int n)
{
	int rarr[N];

	for (int i = 0; i < n; i++)
	{
		rarr[i] = a[n - i - 1];
	}
	for (int i = 0; i < n; i++)
	{
		rarr[i] = a[i];
	}
}
