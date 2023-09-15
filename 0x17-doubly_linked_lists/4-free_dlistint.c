#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to the list
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = NULL;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
