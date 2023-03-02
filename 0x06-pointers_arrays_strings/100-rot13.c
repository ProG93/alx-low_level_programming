#include "main.h"
#include <stdio.h>
/**
 * rot13- encode string.
 * @q: - string
 * Return: string
 */

char *rot13(char *q)
{
	int i;
	int k;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; *(q + i) != '\0'; i++)
	{
		for (k = 0; k < 52; k++)
		{
			if (*(q + i) == a[k])
			{
				*(q + i) = rot[k];
				break;
			}
		}
	}
	return (q);
}
