#include <stdio.h>
#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: the string to  be considered.
 * @accept: the source of the substring.
 *
 * Return: the length of the substring.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int str_length = 0;
	int find = 1;
	char *c;

	while (*s && find)
	{
		find = 0;
		for (c = accept; *c; c++)
		{
			if (*s == *c)
			{
				find = 1;
				break;
			}
		}
		if (find)
		{
			str_length++;
			s++;
		}
		else
		{
			break;
		}
	}
	return (str_length);
}
