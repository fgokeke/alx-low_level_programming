#include "main.h"

/**
 * print_sign - to check for the sign of numbers
 * @n: the integers that are to be checked
 *
 * Return: 0 on success
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
		else if (n == 0)
		{
			_putchar('0');
			return (0);
		}
		else if (n < 0)
		{
			_putchar('-');
			return (-1);
		}

	return (0);
}
