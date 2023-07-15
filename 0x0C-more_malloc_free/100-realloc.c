#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc -  a function that reallocates a
 * memory block using malloc and free.
 * @ptr: pointer to previous memory.
 * @old_size: size of allocated space for ptr.
 * @new_size: new size of new memory block.
 *
 * Return: a void pointer to new memory.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *np;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		np = malloc((new_size));

			if (np == NULL)
				return (NULL);

			return (np);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	np = malloc(new_size);

	if (np == NULL)
		return (NULL);

	for (i = 0; i < new_size && i < old_size; i++)
	{
		np[i] = ((char *) ptr)[i];
	}
	free(ptr);
	return (np);
}
