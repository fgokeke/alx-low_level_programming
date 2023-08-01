#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns
 * the nth node of a listint_t linked list.
 * @head: pointer to the list.
 * @index: the index number of the node.
 *
 * Return: the nth node of the listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = head;

	while (index != 0 && ptr)
	{
		ptr = ptr->next;
		index--;
	}
	return (ptr ? ptr : NULL);
}
