#include "main.h"
#include <stdio.h>

/**
 * get_bit -  a function that returns the value of
 * a bit at a given index.
 * @n: the integer to be considered.
 * @index: the index, starting from 0 of the bit you want to get.
 *
 * Return: the value of the bit at index index or
 * -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int shift;
	int bit_value;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	shift = n >> index;
	bit_value = shift & 1;

	return (bit_value);
}
