#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index -  a function that deletes the node at index
 * index of a listint_t linked list.
 * @head: pointer to the list.
 * @index: the index to delete the node at.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *previous = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	while (index != 0 && current && previous)
	{
		previous = current;
		current = current->next;
		index--;
	}
	if (current == NULL)
	{
		return (-1);
	}
	previous->next = current->next;
	free(current);

	return (1);
}
