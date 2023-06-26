#include "main.h"
/**
 * print_line - to print a straight line
 * @n: how many times the line will be printed
 *
 * Return: no return value
 */
void print_line(int n)
{
	int i = 1;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
