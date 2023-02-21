#include "main.h"
/**
 * _islower - minimum value
 * @c: is the char
 * Return: 1 if is lowercase, otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' || c <= 'z')
		return (1);
	else
		return (0);
}
