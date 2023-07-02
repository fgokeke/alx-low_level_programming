#include <stdio.h>
#include "main.h"

/**
 * _strcmp -  a function that compares two strings.
 * @s1: the first string.
 * @s2: the second string.
 *
 * Return: the value of the comparison.
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;
	int b;

	while (a < s1[a] - 1)
	{
		b = (s1[a] + '0') - (s2[a] + '0');
		a++;
		if (s1[a] < s2[a] || s1[a] > s2[a])
		break;
	}
	return (b);
}
