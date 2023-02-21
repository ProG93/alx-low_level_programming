#include "main.h"
/**
 * times_table - print 9 times
 */
void times_table(void)
{
	int i, j, k;

	k = j * i;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j == 0)
			{
				_putchar(k + '0');
			}
			if (k < 10 && j != 0)
			{
				_putchar('.');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}
			else if (k >= 10)
				_putchar('.');
				_putchar(' ');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
	}
	_putchar('\n');
}
