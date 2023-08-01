#include "lists.h"
#include <stdio.h>

/**
 * reverse_listint - a function that reverses
 * a listint_t linked list.
 * @head: pointer to the pointer to the list.
 *
 * Return: a pointer to the first node
 * of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *after = NULL;
	listint_t *prev = NULL;

	while (*head != NULL)
	{
		after = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = after;
	}
	*head = prev;

	return (*head);
}
