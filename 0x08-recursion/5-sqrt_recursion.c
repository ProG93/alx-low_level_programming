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
	if (n < 0)
		return (-1);
	return (sqrt_function(n, 0));
}

/**
 * sqrt_function - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @i: iterator
 *
 * Return: the resulting square root
 */
int sqrt_function(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt_function(n, i + 1));
}
