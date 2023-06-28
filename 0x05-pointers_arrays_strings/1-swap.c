#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 * @a: first integer to be swapped
 * @b: second integer to be swapped
 *
 * Return: no return value
 */
void swap_int(int *a, int *b)
{
	int i = *b;
	*b = *a;
	*a = i;
}
