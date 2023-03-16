#include <stdio.h>
#include "main.h"

/**
* _memset - copy cat
* @s: string
* @n: bytes
* @d: input
* Return: string
*/

char *_memset(char *s, char d, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = d;
	}
	return (s);
}

/**
* _calloc - allocates array
* @nmemb: elements of size
* @size: bytes
* Return: nothing
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *c;

	if (nmemb == 0 || size == 0)
		return (NULL);
	C = malloc(nmemb * size);
	if (c == 0)
		return (NULL);
	_memset(c, 0, (nmemb * size));
	return (c);
}
