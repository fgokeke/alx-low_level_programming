#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - to prints all the elements of a dlistint_t list.
 * @h: the pointer to the head of the list.
 *
 * Return: the number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *ptr = NULL;

	ptr = h;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		count++;
	}
	return (count);
}
