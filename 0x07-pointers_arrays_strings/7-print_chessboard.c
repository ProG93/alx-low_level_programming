#include "main.h"
#include <stdio.h>

/**
* print_chessboard - a function that prints the chessboard
* @a: pointer to an 8x8 array of characters
* Return: returns nothing
*/
void print_chessboard(char (*a)[8])
{
	int i, k;

	for (i = 0; i < 8; i++)
	{
		for (k = 0; k < 8; k++)
		{
			printf("%c", a[i][k]);
		}
		printf("\n");
	}
}
