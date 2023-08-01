#include "lists.h"
#include <stdio.h>

/**
 * find_listint_loop - a function that finds
 * the loop in a linked list.
 * @head: pointer to the list.
 *
 * Return: address of the node where the loop starts,
 * or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise = head, *hare = head;

	if (head == NULL)
		return (NULL);

	while (hare && tortoise && hare->next)
	{
		tortoise = tortoise->next;
		hare = (hare->next)->next;
		if (hare == tortoise)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}
			return (hare);
		}
	}
	return (NULL);
}
