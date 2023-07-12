#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid -  a function that returns a pointer to
 * a 2 dimensional array of integers.
 * @width: the width or columns of the array.
 * @height: the height or rows of the array.
 * Return: pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i, j, k, l;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	array = malloc(height * sizeof(int *));
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	for (j = 0; j < height; j++)
	{
		array[j] = malloc(width * sizeof(int));
		if (array[j] == NULL)
		{
			for (k = j; k >= 0; k--)
			{
				free(array[k]);
			}
			free(array);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (l = 0; l < width; l++)
		{
		array[i][l] = 0;
		}
	}

	return (array);
}
