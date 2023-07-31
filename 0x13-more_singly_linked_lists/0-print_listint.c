#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print a listint_t list.
 * @h: pointer to the list to print.
 *
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr = h;

	while (ptr)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		count++;
	}
	return (count);
}
