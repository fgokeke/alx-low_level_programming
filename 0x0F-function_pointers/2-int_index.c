#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: the array to be searched.
 * @size: the size of the array.
 * @cmp: a pointer to the function to be used to compare values.
 *
 * Return:  index of the first element for which
 * the cmp function does not return 0,
 * If no element matches, return -1,
 * If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
