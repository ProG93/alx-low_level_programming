#include <stdio.h>
#include "main.h"

/**
* _strspn - length of prefix sub string
* @s: initial segment
* @accept: bytes
* Return: number of bytes
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int j, k;
	unsigned int t = 0;

	for (j = 0; s[j] != 0; j++)
	{
		if (s[j] == ' ')
			break;
		for (k = 0; accept[k] != 0;)
		{
			t++;
		}
	}
	return (t);
}
