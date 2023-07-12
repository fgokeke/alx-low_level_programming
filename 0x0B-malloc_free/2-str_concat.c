#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1: the first string.
 * @s2: the second string.
 *
 * Return: pointer to the concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
	int L1 = 0, L2 = 0, str_length, i, j = 0, k = 0;
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[L1])
	{
		L1++;
	}
	while (s2[L2])
	{
		L2++;
	}
	str_length = L1 + L2;
	str = malloc((str_length + 1) * sizeof(char));
	for (i = 0; i < str_length; i++)
	{
		str[i] = s1[i];
	}
	while (str[k] != '\0')
	{
		k++;
	}
	while (s2[j] != '\0')
	{
		str[k] = s2[j];
		k++;
		j++;
	}
	str[i] = '\0';

	return (str);
}
