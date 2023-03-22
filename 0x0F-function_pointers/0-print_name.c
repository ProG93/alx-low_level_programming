#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name
 * @name: name that needs to be printed
 * @f: pointer to a function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
