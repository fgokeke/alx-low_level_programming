#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - a function that prints the sum of the
 * two diagonals of a square matrix of integers.
 * @a: the matrix to be considered.
 * @size: the size of the matrix
 *
 * Return: no return value
 */
void print_diagsums(int *a, int size)
{
	int sum1;
	int sum2;
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum1 += a[i * size + j];
			}
			if (i + j == size - 1)
			{
				sum2 += a[i * size + j];
			}
		}
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
