#include <stdio.h>
#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: pointer to the array
 * @n: number of elements in the array
 *
 * Return: no return value
 */
void reverse_array(int *a, int n)
{
	int first = 0;
	int last = n - 1;
	int temp;

	while (first < last)
	{
		temp = a[first];
		a[first] = a[last];
		a[last] = temp;
		first++;
		last--;
	}
}
