#include "main.h"

/**
 * print_numbers - displays numbers
 * Return: 0
 */
void print_numbers(void)
{
	char num;

	while (num <= 9)
	{
		if (num != 2 && num != 4)
		{
			_putchar('0' + num);
		}
		n++;
	}

	_putchar('\n');
}
