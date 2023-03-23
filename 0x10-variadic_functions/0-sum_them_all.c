#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - sum of all parameters
 * @n: number of parameters
 * Return: 0 if n = 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int sum = 0, i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);

	return (sum);
}
