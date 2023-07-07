#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - a function that returns the
 * value of x raised to the power of y
 * @x: the value to be considered.
 * @y: the power to raise x to.
 *
 * Return: value of the result.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, (y - 1)));
}
