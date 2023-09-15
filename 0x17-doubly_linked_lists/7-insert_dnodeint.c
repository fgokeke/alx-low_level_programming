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
	dlistint_t *new_node = NULL, *ptr = *h, *ptr2 = NULL;

	if (*h == NULL)
		return (NULL);
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
	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		if (*h != NULL)
		{
			(*h)->prev = new_node;
		}
		*h = new_node;
		return (*h);
	}
	ptr = *h;
	while (idx != 1)
	{
		ptr = ptr->next;
		idx--;
	}
	ptr2 = ptr->next;
	ptr->next = new_node;
	ptr2->prev = new_node;
	new_node->next = ptr2;
	new_node->prev = ptr;
	return (*h);
}
