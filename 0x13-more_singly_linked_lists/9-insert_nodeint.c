#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index -  a function that inserts a
 * new node at a given position.
 * @head: pointer to the list.
 * @idx: index of the node to be inserted.
 * @n: the data of the node.
 *
 * Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *ptr = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL || head == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	idx--;
	while (idx != 0 && ptr)
	{
		ptr = ptr->next;
		idx--;
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	new_node->next = ptr->next;
	ptr->next = new_node;

	return (new_node);
}
