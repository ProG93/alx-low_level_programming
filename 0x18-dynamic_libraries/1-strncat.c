#include "main.h"
#include <stdio.h>

/**
 * *_strncat - print out two strings
 * @dest: - destination of pointer
 * @src: source of pointer
 * @n: at most bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int b;
	int i;

	b = 0;
	while (dest[b] != '\0')
	{
		b++;
	}
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[b] = src[i];
		b++;
		i++;
	}
	dest[b] = '\0';
	return (dest);
}

