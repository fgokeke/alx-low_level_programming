#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array, using malloc.
 * @nmemb: number of elements in the array.
 * @size: size of each elements.
 *
 * Return: a void pointer.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i;
	char *byte_p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	byte_p = (char *)p;
	for (i = 0; i < (nmemb * size); i++)
	{
		byte_p[i] = 0;
	}
	return (p);
}
