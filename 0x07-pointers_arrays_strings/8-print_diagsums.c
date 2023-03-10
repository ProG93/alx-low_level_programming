#include <stdio.h>
#include "main.h"

/**
* print_diagsums - prints diag numbers
* @a: pointer
* @size: Array in which it will be stored
* Return: void
*/

void print_diagsums(int *a, int size)
{
	int i;
	int n = 0, m = 0, p = 1;
	long int d1 = 0, d2 = 0;

	for (i = 0; i < size; i++)
	{
		d1 += a[(size * m) + m];
		m++;
	}
	for (i = 0; i < size; i++)
	{
		d2 += a[(size * n) + (size - p)];
		n++;
		p++;
	}
	printf("%ld, %ld\n", d1, d2);
}
