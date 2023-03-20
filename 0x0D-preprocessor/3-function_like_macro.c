#include <stdio.h>
#include "3-function_like_macro.h"

/**
 * main - compute absolute value of x
 * Return: 0
 */
int main(void)
{
	int x = 10;
	int y = 30;

	printf(x, ABS(x));
	printf(y, ABS(x));
	return (0);
}
