#include <stdio.h>

/**
 * main - alphabet
 * Return: 0(Success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet, toupper(alphabet));
	}
	putchar('\n');
	return (0);
}
