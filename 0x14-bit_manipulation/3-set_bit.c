#include "main.h"
#include <stdio.h>

/**
 * set_bit - a function that sets the
 * value of a bit to 1 at a given index.
 * @n: pointer to the integer to be considered.
 * @index: the index of the number to be considered.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n = *n | (1UL << index);

		return (1);
}
