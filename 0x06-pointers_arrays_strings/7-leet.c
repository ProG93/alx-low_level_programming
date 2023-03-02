#include "main.h"
#include <stdio.h>
/**
 * *leet - letters to numbers
 * @s: -value
 * Return: s value
 */
char *leet(char *s)
{
	int i, k;
	char n1[] = "aAeEoOtTlL";
	char n2[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; k < 10; k++)
		{
			if (s[i] == n1[k])
			{
				s[i] = n2[k];
			}
		}
	}
	return (s);
}
