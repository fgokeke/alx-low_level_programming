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
	int i;
	int n;

	while (str[str_length] != '\0')
	{
		str_length++;
	}
	for (i = 0; i <= str_length; i++)
	{
		if ((str_length)  % 2 == 1)
		{
			n = ((str_length - 1) / 2);
			for (i = n; i < str_length; i++)
			{
				_putchar(str[i]);
			}

		}
		else if (str_length % 2 == 0)
		{
			n = (str_length / 2);
			for (i = n; i < str_length; i++)
			{
				_putchar(str[i]);
			}
		}
	}
	_putchar('\n');
}
