#include "main.h"
#include <stdio.h>

/**
 * print_binary - a function that prints the binary
 * representation of a number.
 * @n: the number to be converted.
 *
 * Return: Nothing.
 */
void print_binary(unsigned long int n)
{
	unsigned long int present;
	int count_1 = 0, index;

	for (index = 63; index >= 0; index--)
	{
		present = n >> index;
		if (present & 1)
		{
			_putchar('1');
			count_1++;
		}
		else if (count_1)
			_putchar('0');
	}
	if (!count_1)
		_putchar('0');
}
