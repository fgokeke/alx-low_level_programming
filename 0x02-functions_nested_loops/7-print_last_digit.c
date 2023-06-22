#include "main.h"

/**
 * print_last_digit - to print last digit of a number
 * @a: the number to be checked
 *
 * Return: 0 when successful
 */
int print_last_digit(int a)
{
	int z = a % 10;

	if (a < 0)
	{
		_putchar(_abs(z));
		else
		{
			_putchar(z);
		}
	}

	return (0);
}
