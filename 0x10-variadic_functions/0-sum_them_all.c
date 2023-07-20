#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a variadic function that returns
 * the sum of all its parameters.
 * @n: the first paramter.
 *
 * Return: sum of the parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, add = 0;
	va_list sum;

	va_start(sum, n);
	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		add += va_arg(sum, int);
	}
	return (add);
}
