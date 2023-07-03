#include <stdio.h>
#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @s: the string to be considered
 *
 * Return: returns the string
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		while (!(s[i] <= 'z' && s[i] >= 'a'))
		i++;
		if (s[i - 1] == ',' ||
		s[i - 1] == ';' ||
		s[i - 1] == '.' ||
		s[i - 1] == ' ' ||
		s[i - 1] == '!' ||
		s[i - 1] == '"' ||
		s[i - 1] == '(' ||
		s[i - 1] == ')' ||
		s[i - 1] == '{' ||
		s[i - 1] == '}' ||
		s[i - 1] == '\n' ||
		s[i - 1] == '\t' ||
		s[i - 1] == '?' ||
		s[i - 1] == 0)
		s[i] -= 32;
		i++;
	}
	return (s);
}
