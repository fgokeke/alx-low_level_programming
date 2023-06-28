#include <stdio.h>
#include "main.h"
/**
 * puts2 - prints every other character of a string,
 * starting with the first character
 * @str: the pointer to the string to be considered.
 *
 * Return: no return value
 */
void puts2(char *str)
{
	int str_length = 0;
	int i;

	while (str[str_length] != '\0')
	{
		str_length++;
	}
	for (i = 0; i <= str_length - 1; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
