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
	unsigned int i, k;
	unsigned int t = 0;

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] == ' ')
			break;
		for (k = 0; accept[k] != 0; k++)
		{
			if (s[i] == accept[k])
				t++;
		}
	}
	return (t);
}
