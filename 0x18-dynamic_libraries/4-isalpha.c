#include "main.h"
/**
 * _isalpha - is the alphabet upper or lowercase
 * @c: is a char
 * Return: 1 if is lower or uppercase otherwise 0.
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
