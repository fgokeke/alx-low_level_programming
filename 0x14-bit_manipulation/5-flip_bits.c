#include "main.h"
#include <stdio.h>

/**
 * flip_bits - a function that returns the number of bits you
 * would need to flip to get from one number to another.
 * @n: the first integer to consider.
 * @m: the second integer to consider.
 *
 * Return: number of bits you would need to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_res = n ^ m;
	unsigned int count_flip = 0;

	while (xor_res)
	{
		count_flip += xor_res & 1;
		xor_res >>= 1;
	}
	return (count_flip);
}
