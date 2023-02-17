#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - programming variables
 * Return: 0(Success)
 */
int main(void)
{

	int n;
	srand (time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes here*/
	if(n > 0)
	printf("%dis positive\n", n);
	else if(n < 0)
	printf("%dis negative\n", n);
	else
	printf("%dis zero\n", n);
	return 0;
}
