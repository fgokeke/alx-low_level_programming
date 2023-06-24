#include "main.h"

/**
 * times_table - to print the times table up to 9
 *
 * Return: there is no return value
 */
void times_table(void)
{
	int a, b, product, c, d;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			product = a * b;
			if (product > 9)
			{
				c = product % 10;
				d = (product) / 10;
				_putchar(',');
				_putchar(' ');
				_putchar(d + '0');
				_putchar(c + '0');
			}
			else
			{
				if (b != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(product + '0');
			}
		}
		_putchar('\n');
	}
}
