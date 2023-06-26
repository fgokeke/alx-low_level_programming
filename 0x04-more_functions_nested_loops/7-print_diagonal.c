#include "main.h"

/**
 * print_diagonal - to print diagonal line on the terminal
 * @n: the number of times to print the diagonal
 *
 * Return: no return value
 */
void print_diagonal(int n)
{
	int i = 1;
	int j = 1;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
