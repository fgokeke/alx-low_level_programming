#include <stdio.h>
#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * @s: the pointer to the string.
 *
 * Return: no return value
 */
void rev_string(char *s)
{
	int str_length = 0;
	int Begin = 0;
	int End;
	char temp;

	while (s[str_length] != '\0')
	{
		str_length++;
	}
	End = str_length - 1;
	while (Begin < End)
	{
	temp = s[Begin];
	s[Begin] = s[End];
	s[End] = temp;
	Begin++;
	End--;
	}
}
