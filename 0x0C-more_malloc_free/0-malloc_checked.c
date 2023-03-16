#include <stdio.h>
#include "main.h"

/**
* malloc_checked - allocated memory
* @b: integer to memory
* Return: nothing
*/

void *malloc_checked(unsigned int b)
{
	void *c;

	c = malloc(b);
	if (c == NULL)
	{
		exit(98);
	}
	return (c);
}
