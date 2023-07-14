#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers.
 * @min: minumum value of the array.
 * @max: maximum value of the array.
 *
 * Return: pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *p;
	int d = max - min + 1, i;

	if (min > max)
	{
		return (NULL);
	}
	p = malloc(d * sizeof(int));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		p[i] = min++;
	}
	return (p);
}
