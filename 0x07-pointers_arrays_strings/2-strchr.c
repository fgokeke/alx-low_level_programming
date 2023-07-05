#include "main.h"
#include <stdio.h>

/**
 * _strchr - a function that locates a character in a string.
 * @s: the pointer to the string to be checked.
 * @c: the character to be located.
 *
 * Return: the first occurrence of c or NULL if not found.
 */
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
		{
			return (&s[a]);
		}
	}
	return (NULL);
}
