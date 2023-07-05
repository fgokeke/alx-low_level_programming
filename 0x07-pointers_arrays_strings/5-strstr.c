#include <stdio.h>
#include "main.h"

/**
 * _strstr - a function that locates a substring.
 * @haystack: the string to be searched.
 * @needle: the substring to search for.
 *
 * Return: pointer to the substring or
 * NULL when it is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *h;
	char *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;
		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
