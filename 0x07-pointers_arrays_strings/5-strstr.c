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
	int j = 0, k, i;


	for (k = 0; haystack[k] != 0; k++)
	{
		k = i;
		j = 0;
		for (; needle[j] != 0)
		{
			if (haystack[k] == needle[j++])
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
