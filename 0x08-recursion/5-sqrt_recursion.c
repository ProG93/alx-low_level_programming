#include "main.h"

/**
* _sqrt_recursion - a function that returns the square root of a number
* @n: the number to be operated on
* @i: integer
* Return: returns the square root of n as an int
*/
int _sqrt_recursion(int n, int i)
{
	if (n == 0 || n == 1)
		return (n);
	else if (i * i < n)
		return (_sqrt_recursion(i + 1, n));
	else if (i * i == n)
	return (i);
	return (-1);
}
