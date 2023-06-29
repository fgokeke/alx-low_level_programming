#include <stdio.h>
#include "main.h"

/**
 * print_array -  a function that prints n elements of an array of integers,
 * followed by a new line.
 * @a: the string pointing to the array
 * @n: the number of elements in the array
 *
 * Return: no return value
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
