#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - a function that frees dogs.
 * @d: pointer to the dog to be freed.
 *
 * Return: nothing.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
