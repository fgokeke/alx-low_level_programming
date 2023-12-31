#include "main.h"

/**
 * _abs - calculates the absolute value of the integer
 *@a: the integer to be calculated
 *
 * Return: 0 on successful execution
 */
int _abs(int a)
{
	if (a < 0)
	{
		return (-1 * a);
	}
	else
	{
		return (a);
	}

	return (0);
}
