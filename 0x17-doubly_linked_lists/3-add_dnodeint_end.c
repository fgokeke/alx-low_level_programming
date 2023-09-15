#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to the head that points to the list.
 * @n: the data part of the node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tp = NULL, *temp = NULL;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
	{
		printf("memory allocation failed");
		return (NULL);
	}
	temp->next = NULL;
	temp->n = n;
	if (*head == NULL)
	{
		temp->prev = NULL;
		*head = temp;
	}
	else
	{
		tp = *head;
		while (tp->next != NULL)
			tp = tp->next;
		tp->next = temp;
		temp->prev = tp;
	}
	return (*head);
}
