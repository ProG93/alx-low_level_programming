#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to be duplicated string
 * @str: string
 * Return: NULL
 */

char *_strdup(char *str)
{
	char *d;
	unsigned int i, k;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
		;
	i++;
	if (i < 1)
		return (NULL);
	d = malloc(sizeof(char) * i);
	if (d == NULL)
	{
		free(d);
		return (NULL);
	}
	for (k = 0; k < i; k++)
		d[k] = str[k];
	d[k] = '\0';

	return (d);
}
