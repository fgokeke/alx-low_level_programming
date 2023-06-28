#include <stdio.h>
#include "main.h"

/**
 * print_rev - to print a function that prints a string,
 * in reverse, followed by a new line.
 * @s: the string to be printed
 */
void print_rev(char *s)
{
	int str_length = 0;

	while (s[str_length] != '\0')
	{
		str_length++;
	}

	for (str_length -= 1; str_length >= 0; str_length--)
	{
		_putchar(s[str_length]);
	}
	_putchar('\n');
}
