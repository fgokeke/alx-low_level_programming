#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - print the nodes of a list_t.
 * @h: pointer to the list_t to be considered.
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t node_amount = count_nodes(h);
	list_t const *ptr;

	if (h == NULL)
	{
		printf("empty linked lists");

	}
	ptr = h;
	while (ptr != NULL)
	{
		if (ptr->str != NULL)
		{
			printf("[%u] %s\n", ptr->len, ptr->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		ptr = ptr->next;
	}

	return (node_amount);
}
