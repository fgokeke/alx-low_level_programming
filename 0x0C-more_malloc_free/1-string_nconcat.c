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
	unsigned int l, l1 = 0, l2 = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[l1])
		l1++;
	while (s2[l2])
		l2++;
	if (n >= l2)
		l = l1 + l2;
	else
		l = l1 + n;
	s = malloc((l + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);

	l2 = 0;
	while (j < l)
	{
		if (j <= l1)
			s[j] = s1[j];

		if (j >= l1)
		{
			s[j] = s2[l2];
			l2++;
		}
		j++;
	}
	s[j] = '\0';

	return (s);
}
