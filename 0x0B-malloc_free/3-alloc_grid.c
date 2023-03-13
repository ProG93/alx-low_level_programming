#include "main.h"
#include <stdlib.h>

/**
 * str_concat - prints concatenates of two strings
 * @s1: the first string
 * @s2: the second string
 * Return: NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *d;
	int i, k, x, size;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}
	for (i = 0; s1[i]; i++)
		;
	for (k = 0; s2[k]; k++)
		;
	size = i + k + 1;
	d = malloc(sizeof(char) * size);
	if (d == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < size; x++)
		x < i ? (d[x] = s1[x]) : (d[x] = s2[x - i]);
	return (d);
}
