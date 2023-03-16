#include <stdio.h>
#include "main.h"

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
	unsigned int i, size1, size2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (size1 = 0; s1[size1] != '\0'; size1++)
	for (size2 = 0; s2[size2] != '\0'; size2++)
	if (n > size2)
		n = size2;
	cat = malloc((size1 + n + 1) * sizeof(char));
	if (cat == NULL)
		return (0);
	for (i = 0; i < size1; i++)
	{
		cat[i] = s1[i];
	}
	for (; i < (size1 + n); i++)
	{
		cat[i] = s2[i - size1];
	}
	cat[i] = '\0';
	return (cat);
}
