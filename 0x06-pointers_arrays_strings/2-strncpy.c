#include "main.h"
#include <stdio.h>
/**
 * *_strncpy - print out two strings
 * @dest: - destination of string
 * @src: source of string
 * @n: number of times
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int b;

	b = 0;
	while (b < n && src[b] = '\0')
	{
		dest[b] = src[b];
		b++;
	}
	while (b < n)
	{
		dest[b] = '\0';
		b++;
	}
	return (dest);
}
