#include "main.h"

/**
 * print_triangle - to print triangles with #
 * @size: the size of the triangle
 *
 * Return: no return value
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = size - i; j > 1; j--)
			{
				_putchar('` ');
			}
			for (k = 0; k <= i; k++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
