#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 -  frees a listint_t list.
 * and sets the head to NULL.
 * @head: pointer to the list.
 *
 * Returns: Nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr = *head;

	if (head == NULL)
	{
		return;
	}
	while (*head)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}
	*head = NULL;
}
