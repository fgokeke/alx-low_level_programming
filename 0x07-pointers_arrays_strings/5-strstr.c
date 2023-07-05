#include <stdio.h>
#include "main.h"

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
