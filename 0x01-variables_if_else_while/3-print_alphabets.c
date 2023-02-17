#include <stdio.h>

/**
 * main - alphabet
 * Return: 0(Success)
 */
int main(void)
{
	char alphabet;
	char upper = toupper(alphabet);

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
		putchar(upper);
	}
	putchar('\n');
	return (0);
}
