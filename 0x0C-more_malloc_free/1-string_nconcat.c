#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - concatenate two strings
* @s1: first string
* @s2: second string
* @n: bytes
* Return: Null
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cat;
	unsigned int i = 0, size1 = 0, size2 = 0, j = 0;

	while (s1 && s1[size1])
		size1++;
	while (s2 && s2[size2])
		size2++;
	if (n < size2)
		cat = malloc(sizeof(char) * (size1 + n + 1);
	else
		cat = malloc(sizeof(char) * (size1 + size2 + 1);
	if (!cat)
		return (NULL);
	while (i < size1)
	{
		cat[i] = s1[i];
		i++;
	}

	while (n < size2 && i < (size1 + n))
		cat[i++] = s2[j++];
	while (n >= size2 && i < (size1 + size2))
		cat[i++] = s2[j++];
	cat[i] = '\0';

	return (cat);
}
