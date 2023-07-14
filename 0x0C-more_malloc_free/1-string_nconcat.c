#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: the number of bytes in s2.
 *
 * Return: pointer to the new string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int k, l1 = 0, l2 = 0, a;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[l1])
		l1++;
	while (s2[l2])
	{
		l2++;
	}
	s = malloc(((l1 + l2) + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (k = 0; k < (l1 + l2); k++)
	{
		s[k] = s1[k];
	}
	k = 0;
	while (s[k])
		k++;
	if (n >= l2)
	{
		for (a = 0; a < l2; a++)
		{
			s[k] = s2[a];
			k++;
		}
		s[k] = '\0';
	}
	for (a = 0; a < n; a++)
	{
		s[k] = s2[a];
		k++;
	}
	s[k] = '\0';

	return (s);
}
