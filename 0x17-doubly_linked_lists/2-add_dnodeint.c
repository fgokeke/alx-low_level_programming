#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: pointer to the head that points to the node.
 * @n: the data part of the node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = NULL;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
	{
		printf("memory allocation failed");
		return (NULL);
	}
	temp->n = n;
	temp->prev = NULL;
	if (*head == NULL)
	{
		temp->next = NULL;
	}
	else
	{
		temp->next = *head;
		(*head)->prev = temp;
	}
	*head = temp;
	return (*head);
}
