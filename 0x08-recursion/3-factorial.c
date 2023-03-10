#include <stdio.h>
#include "main.h"

/**
* factorial - factor certain numbers
* @n: integer
* Return: nothing
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
