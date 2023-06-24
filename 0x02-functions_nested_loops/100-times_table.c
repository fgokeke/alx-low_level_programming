#include "main.h"

/**
 * print_times_table - function to print times table n
 * @n: the number limit of the times table
 *
 * Return: no return value
 */
void print_times_table(int n)
{
	int a, b, p;

	if (n <= 15 && n >= 0)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				p = a * b;
				if (p > 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((p / 100) + '0');
					_putchar(((p / 10) % 10) + '0');
					_putchar((p % 10) + '0');
				}
				else if (p > 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((p / 10) + '0');
					_putchar((p % 10) + '0');
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
