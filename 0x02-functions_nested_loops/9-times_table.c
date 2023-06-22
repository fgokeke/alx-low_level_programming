#include "main.h"

/**
 * times_table - to print the times table up to 9
 *
 * Return: there is no return value
 */
void times_table(void)
{
	int a;
	int b;
	int product;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			product = (a * b);
			if (product < 10)
			{
				_putchar(product + '0');
			}
			else
				{
					_putchar(product / 10 + '0');
					_putchar(product % 10 + '0');
				}
					_putchar(',');
					_putchar('	');
		}
					_putchar('\n');
	}
}
