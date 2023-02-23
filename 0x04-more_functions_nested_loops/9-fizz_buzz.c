#include <stdlib.h>

/**
 * main - fizz buzz print it
 * Return: 0
 */
int main(void)
{
	int i;
	char f[] = "Fizz";
	char b[] = "Buzz";
	char fb[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
			_putchar(b);
		else if ((i % 3 == 0) && (i % 5 == 0))
			_putchar(fb);
		else if (i % 3 == 0)
			_putchar(f);
		else if (i % 5 == 0)
			_putchar(b);
		else
			_putchar(i);

	}
	_putchar('\n');
	return (0);
}

