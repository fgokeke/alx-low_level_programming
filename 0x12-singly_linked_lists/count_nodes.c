#include <stdio.h>
#include "lists.h"

/**
 * count_nodes - to count the number of nodes in a list.
 * @h: pointer to the list_t.
 *
 * Return: amount of nodes.
 */
int count_nodes(const list_t *h)
{
	int count = 0;
	list_t const *ptr;

	if (h == NULL)
	{
		printf("empty linked lists");
	}
	ptr = h;
	while (ptr != NULL)
	{
		count ++;
		ptr = ptr -> next;
	}
	return (count);
}


