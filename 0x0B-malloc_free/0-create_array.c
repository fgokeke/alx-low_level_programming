#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the array.
 * @c: the char to initialize it with.
 *
 * Return: pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	char *b;
	unsigned int a;

	if (size == 0)
	{
		return (NULL);
	}
	b = malloc(size * sizeof(char));
	if (b == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < size; a++)
	{
		b[a] = c;
	}
	return (b);
}
