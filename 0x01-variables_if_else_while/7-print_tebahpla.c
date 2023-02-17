#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - alphabets
 * Return: 0
 */
int main(void)
{
	char n = 'z';

	while (n <= 'a')
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
