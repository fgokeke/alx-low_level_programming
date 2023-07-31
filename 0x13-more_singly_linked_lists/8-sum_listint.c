#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - a function that returns the sum of
 * all the data (n) of a listint_t linked list.
 * @head: pointer to the list.
 *
 * Return: sum of the data (n).
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr = head;
	int sum = 0;

	if (ptr == NULL)
	{
		return (0);
	}
	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
