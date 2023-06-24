#include "main.h"

/**
 * print_times_table - function to print times table n
 * @n: the number limit of the times table
 *
 * Return: no return value
 */
void print_times_table(int n)
{
	int a, b, c, d, e, f, g, p;

	if (n > 15 || n < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				p = a * b;
				if (p > 99)
				{
					c = p % 10;
					d = (p / 10) % 10;
					e = p / 100;
					_putchar(',');
					_putchar(' ');
					_putchar(e + '0');
					_putchar(d + '0');
					_putchar(c + '0');
				}
				else if (p > 9)
				{
					f = p % 10;
					g = p / 10;
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(g + '0');
					_putchar(f + '0');
				}
				else
				{
					if (b != 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(p + '0');
				}
			}
			_putchar('\n');
		}
	}
}
