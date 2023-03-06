#include <stdio.h>
#include "main.h"

/**
* _strstr - substring
* @needle: substring
* @haystack: string
* Return: NULL
*/

char *_strstr(char *haystack, char *needle)
{
	int j, k;


	for (k = 0; haystack[k] != 0; k++)
	{
		for (j = 0; needle[j] != 0; j++)
		{
			if (haystack[k] == needle[j])
			{
				continue;
			}
			break;
		}
		if (needle[j] == '\0')
			return ((haystack + k));
	}
	return (NULL);
}
