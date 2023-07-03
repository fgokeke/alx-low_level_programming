#include <stdio.h>
#include "main.h"

/**
 * leet - a function that encodes a string into 1337.
 * @s: the string to be encoded.
 *
 * Return: the encoded string.
 */
char *leet(char *s)
{
	int a, b;
	char x[] = "lLtToOeEaA";
	char y[] = "1177003344";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (s[a] == x[b])
			{
				s[a] = y[b];
			}
		}

	}
	return (s);
}
