#include <stdio.h>
#include "main.h"

/**
* _strpbrk - search a string
* @s: string
* @accept: bytes in string
* Return: NULL
*/

char *_strpbrk(char *s, char *accept)
{
	int j, k;

	for (j = 0; s[j] != 0; j++)
	{
		for (k = 0; accept[k] != 0; k++)
		{
			if (s[j] == accept[k])
			{
				return ((s + j));
			}
		}
	}
	return (NULL);
}
