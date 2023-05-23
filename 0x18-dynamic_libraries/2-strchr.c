#include "main.h"
#include <stdio.h>
/**
 * _strchr - locate a character in astring
 * @c: charater
 * @s: is a string
 * Return: NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; 1; i++)
	{
		if (s[i] == c)
			return ((s + i));
		if (s[i] == 0)
			break;
	}
	return (NULL);
}
