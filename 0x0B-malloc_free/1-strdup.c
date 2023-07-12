#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 * @str: the string to copy.
 *
 * Return: a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int length = 0;
	unsigned int j;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[length])
	{
		length++;
	}
	s = malloc((length + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < length; j++)
	{
		s[j] = str[j];
	}
	s[length] = '\0';

	return (s);
}
