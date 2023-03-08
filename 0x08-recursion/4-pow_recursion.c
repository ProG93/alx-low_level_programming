#include <stdio.h>
#include "main.h"

/**
* _pow_recursion - to the power
* @x:value
* @y:raised to the power
* Return: nothing
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (x != 0)
		return (x * _pow_recursion(x, (y - 1)));
	else
		return (1);
}
