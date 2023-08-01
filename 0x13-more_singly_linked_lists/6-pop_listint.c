#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked
 * list, and returns the head node’s data (n).
 * @head: pointer to the list.
 *
 * Return: the node's data.
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	
	if (*head == NULL || head == NULL)
	{
		return (0);
	}
	ptr = (*head)->next;
	free(*head);
	*head = ptr;

	return ((*head)->n);
}
