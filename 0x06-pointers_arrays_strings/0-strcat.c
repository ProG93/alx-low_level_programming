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
	int b = -1;
	int i;

	for
		(i = 0;
		dest[i] != '\0';
		i++)
	do	{
		b++;
		dest[i] = src[b];
		i++;
		}
	while	{
		src[b] != '\0'
		};
	return (dest);
}
