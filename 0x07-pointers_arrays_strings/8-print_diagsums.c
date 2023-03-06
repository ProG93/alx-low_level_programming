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
	int d = 0, b = 0, c = 1;
	long int f1 = 0, f2 = 0;

	for (i = 0; i < size; i++)
	{
		f1 += a[(size * b) + b];
			b++;
	}
	for (i = 0; i < size; i++)
	{
		f2 += a[(size * d) + d];
		d++;
		c++;
	}
	_putchar(f1, f2);
	_putchar('\n');
}
