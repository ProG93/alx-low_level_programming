#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print numbers
 * Return: 0(Success)
 */
int main(void)
{
	char n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
