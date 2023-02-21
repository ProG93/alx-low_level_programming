#include "main.h"
/**
 * print_sign - determines the sign
 * @n: is a number
 * Return: 1 if number is > 0, 0 if number = 0 otherwise -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
