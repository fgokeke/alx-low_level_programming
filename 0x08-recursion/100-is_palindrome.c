#include <stdio.h>
#include "main.h"

int _strlength_recurs(char *s);
int compare(char *s, int a1, int a2);

/**
 * _strlength_recurs - to get the length of the string.
 * @s: the string to be considered.
 *
 * Return: the length of string.
 */
int _strlength_recurs(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlength_recurs(s + 1));
}

/**
 * compare - to compare different characters in the string.
 * @s: string to be considered.
 * @a1: the smallest character.
 * @a2: the biggest character.
 *
 * Return: a.
 */
int compare(char *s, int a1, int a2)
{
	if (*(s + a1) == *(s + a2))
	{
		if ((a1 == a2) || (a1 == a2 + 1))
		{
			return (1);
		}
		return (0 + compare(s, a1 + 1, a2 - 1));
	}
	return (0);
}

/**
 * is_palindrome -  a function that returns 1 if a string
 * is a palindrome and 0 if not.
 * @s: the string to be considered.
 *
 * Return: 1 if a string
 * is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
	return (1);
	}
	return (compare(s, 0, _strlength_recurs(s) - 1));
}
