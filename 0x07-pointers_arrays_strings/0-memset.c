#include "main.h"
#include <stdio.h>
/**
 * _memset - fills memory with constant type
 * @n: bytes of the memory
 * @s: Area pointed, the memory location
 * @b: constant byte
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
