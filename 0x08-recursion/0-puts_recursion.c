#include <stdio.h>
#include "main.h"

/**
* _puts_recursion - prints string
* @s: string
* Return: NULL
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return (0);
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
