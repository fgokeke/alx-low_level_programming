#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe -  a function that
 * safely frees a listint_t list.
 * @h: pointer to the list.
 *
 * Return: the size of the list that was free’d.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count_list = 0;
	int difference;
	listint_t *ptr;

	if (h == NULL || *h == NULL)
		return (0);

	while (*h)
	{
		difference = *h - (*h)->next;
		if (difference > 0)
		{
			ptr = (*h)->next;
			free(*h);
			*h = ptr;
			count_list++;
		}
		else
		{
			free(*h);
			*h = NULL;
			count_list++;
			break;
		}
	}
	*h = NULL;

	return (count_list);
}
