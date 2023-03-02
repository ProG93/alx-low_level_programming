#include "main.h"
#include <stdio.h>
/**
 * string_toupper - change lowercase letters to uppercase.
 * @p: analized string.
 *
 * Return: String 'p'.
 */
char *string_toupper(char *p)
{
	int i = 0;

	while (p[i] != '\0')
	{
		if (p[i] >= 'a' && p[i] <= 'z')
		{
			p[i] = p[i] - 32;
		}
		i++;
	}
	return (p);
}
