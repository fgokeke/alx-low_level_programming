#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: the pointer to the string to be considered
 *
 * Return: no return value
 */
void puts_half(char *str)
{
	int str_length = 0;
	int n;

	while (str[str_length] != '\0')
	{
		str_length++;
	}
	if (str_length % 2 == 1)
	{
		n = ((str_length - 1) / 2);
		n += 1;
	}
	else
	{
		n = (str_length / 2);
	}
	for (; n < str_length; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
