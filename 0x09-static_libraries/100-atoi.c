#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
* _atoi - change string to interger
* @s: string
* Return: interger
*/
int _atoi(char *s)
{
	int sign = 1, i = 0;
	unsigned int res = 0;

	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		res = (res * 10) + (s[i] - '0');
		i++;
	}
	res *= sign;
	return (res);
}
