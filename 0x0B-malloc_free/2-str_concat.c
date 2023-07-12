#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * - str_concat - a function that concatenates two strings.
 * @s1: the first string.
 * @s2: the second string
 *
 * Return: pointer to s1 which has contents of s2.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i;
	unsigned int a = 0;
	unsigned int b = 0;
	char *s;
	unsigned int str_length1 = strlen(s1);
	unsigned int str_length2 = strlen(s2);
	unsigned int length = str_length1 + str_length2;
	
	s = malloc(length * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length; i++)
	{
		s[i] = s1[i];
	}
	while (s[a] != '\0')
	{
		a++;
	}
	while (s2[b] != '\0')
	{
		s[a] = s2[b];
		a++;
		b++;
	}
	s[a] = '\0';

	return (s);
}
