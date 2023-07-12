#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *  _strdup - a function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter.
 * @str: the string given as a paramter.
 *
 * Return: a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	unsigned int length = strlen(str);
	char *s;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}
	s = malloc(length * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length; i++)
	{
		s[i] = str[i];
	}
	s[length] = '\0';

	return (s);
}
