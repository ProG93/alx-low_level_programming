#include "main.h"
/**
 * times_table - print 9 times
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{

		for (j = 0; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');

			k = j * i;

			if (k <= 9)
				_putchar(' ');
			else
				_putchar((k / 10) + '0');
			_putchar((k % 10) + '0');
		}
		_putchar('\n');
	}

}
