#include "search_algos.h"

/**
 * print_array - Prints an array of integers
 * @array: The array to be printed.
 * @size: The size of the array
 */
void print_array(const int *array, size_t size)
{
	size_t i;

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		printf("%d", array[i]);
		if (i < size - 1)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - Searches for a value in a sorted array of integers
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: The index where value is located, or -1 if not
 * found or if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left, right, middle;

	if (array == NULL)
	{
		return (-1);
	}
	left = 0;
	right = size - 1;

	while (left <= right)
	{
		print_array(array + left, right - left + 1);
		middle = left + (right - left) / 2;
		if (array[middle] == value)
		{
			return ((int)middle);
		}
		else if (array[middle] < value)
		{
			left = middle + 1;
		}
		else
		{
			right = middle - 1;
		}
	}
	return (-1);
}
