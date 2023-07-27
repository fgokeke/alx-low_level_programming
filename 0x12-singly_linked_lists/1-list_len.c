#include <stdio.h>
#include "lists.h"

/**
 * list_len -  returns the number of elements in a linked list_t list.
 * @h: the list to be considered.
 *
 * Return: the number of elements.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	list_t const *ptr = h;

	while (ptr)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
