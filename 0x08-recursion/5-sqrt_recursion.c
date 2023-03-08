#include <stdio.h>
#include "main.h"

/**
* _sqrt_recursion - returns square root of number
* sqrt_function - recurses the root number
* @n:number
* Return: 0
*/

int _sqrt_recursion(int n)
{
	int k;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (_sqrt_recursion(n, k + 1));
}
