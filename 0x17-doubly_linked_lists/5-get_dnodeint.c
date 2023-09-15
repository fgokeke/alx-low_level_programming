#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node
 * of a dlistint_t linked list.
 * @head: pointer to the list.
 * @index: index of the node, starting from 0.
 *
 * Return: nth node of a dlistint_t linked list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *ptr = NULL;

	if (head == NULL)
		return (NULL);

	ptr = head;
	while (ptr != NULL)
	{
		if (count == index)
			return (ptr);
		ptr = ptr->next;
		count++;
	}
	return (NULL);
}
