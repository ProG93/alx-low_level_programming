#include "main.h"
#include <stdio.h>
/**
 * *cap_string - capitilize all the words of the string.
 * @str: - string
 * Return: string
 */

char *cap_string(char *str)
{
	int i, k;
	int a[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0)
			{
				str[i] = str[i] - 32;
			}
			else
			{
				for (k = 0; k <= 12; k++)
				{
					if (a[k] == str[i])
					{
						str[i] = str[i] - 32;
					}
				}
			}
		}
	i++;
	}
	return (str);
}
