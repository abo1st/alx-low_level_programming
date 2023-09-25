#include <stdlib.h>
#include "main.h"

/**
* _strstr - it locates a substring
*
* @haystack: the longer string to search
* @needle: the substring to search for
*
* Return: a pointer to the beginning of the located substring, or NULL if
* the substring is not found.
*/

char *_strstr(char *haystack, char *needle)
{
	int a;
	int s = 0;

	while (needle[s] != '\0')
		s++;

	while (*haystack)
	{
		for (a = 0; needle[a]; a++)
		{
			if (haystack[a != needle[a])
				break;
		}
		if (a != s)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
