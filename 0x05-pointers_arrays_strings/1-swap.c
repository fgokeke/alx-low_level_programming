#include "main.h"
/**
 * swap_int - to swap the value of integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: no return value
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
