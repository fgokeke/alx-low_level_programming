#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 *
 * Return: no return value
 */
void print_number(int n)
{
	unsigned int a = n;

	if (n < 0)
	{
		n *= -1;
		a = n;
		_putchar('-');
	}
	a /= 10;
	if (a != 0)
	print_number(a);
	_putchar((unsigned int) n % 10 + '0');
}
