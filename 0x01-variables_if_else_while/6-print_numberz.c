#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - numbers
 * Return: 0
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(48 + n);
		n++;
	}
	putchar('\n');
	return (0);
}
