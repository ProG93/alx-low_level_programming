#include "main.h"
#include <stdio.h>
/**
 * *_strcat - print out two strings
 * @dest: - destination of string
 * @src: source of string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int b;
	int i;

	b = 0;
	while (dest[b] != '\0')
	{
		b++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[b] = src[i];
		b++;
		i++;
	}
	dest[b] = '\0';
	return (dest);
}
