#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free-listint - frees a listint_t list.
 * @head: pointer to the list.
 *
 * Return: nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *ptr = head;

	while (ptr)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
