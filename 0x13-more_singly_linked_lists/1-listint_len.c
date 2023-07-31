#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in a
 * linked listint_t list.
 * @h: the pointer to the list.
 *
 * Return: the number of elements.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr = h;

	while (ptr)
	{
		ptr = ptr->next;
		count++;
	}
	return (count);
}
