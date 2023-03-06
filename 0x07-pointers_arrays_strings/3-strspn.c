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
	int j;
	unsigned int t = 0;

	for (j = 0; accept[j]; j++)
	{
		if (*s == accept[j])
		{
			t++;
			break;
		}
		else if (accept[j + 1] == '\0')
			return (t);
	}
}
