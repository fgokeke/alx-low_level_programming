#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - Write a function that searches
 * a string for any of a set of bytes.
 * @s: string to be considered.
 * @accept: the source string.
 *
 * Return: pointer to the byte that matches
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	char *c;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (c = accept; *c; c++)
		{
			if (s[i] == *c)
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}
