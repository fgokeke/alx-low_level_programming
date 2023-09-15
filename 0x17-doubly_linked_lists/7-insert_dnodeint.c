#include "lists.h"

/**
 * count_list - to count number of nodes in list.
 * @h: pointer to the list.
 *
 * Return: number of nodes.
 */
unsigned int count_list(dlistint_t *h)
{
	dlistint_t *ptr = h;
	unsigned int count = 0;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to the pointer to the list.
 * @idx: index of the list where the new node should be added.
 * Index starts at 0
 * @n: the data of the new node.
 *
 * Return: address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count;
	dlistint_t *new_node = NULL, *ptr = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));

	count = count_list(*h);
	if (idx > count)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		printf("memory allocation failed");
		return (NULL);
	}
	new_node->n = n;
	if (idx == 1)
	{
		new_node->prev = *h;
		new_node->next = (*h)->next;
		if ((*h)->next != NULL)
			(*h)->next->prev = new_node;
		(*h)->next = new_node;
	}
	else
	{
		while (idx != 1)
		{
			ptr = ptr->next;
			idx--;
		}
	new_node->prev = ptr;
	new_node->next = ptr->next;
	if (ptr->next != NULL)
		ptr->next = new_node;
	ptr->next = new_node;
	}
	return (*h);
}
