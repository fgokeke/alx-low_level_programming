#include <stdio.h>
#include "main.h"

int _sqrt(int n, int i);
/**
 * _sqrt_recursion - a function that returns the
 * natural square root of a number.
 * @n: the integer to find its square root.
 *
 * Return: value of the square root.
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - computes the natural square root
 * @n: the intedger to find its square root.
 * @i: to iterate.
 *
 * Return: the natural square root result
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
	{
		return (-1);
	}
	if (sqrt == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}
