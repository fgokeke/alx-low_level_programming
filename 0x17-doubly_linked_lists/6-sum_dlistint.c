#include "lists.h"

/**
 * sum_dlistint - returns the sum of all
 * the data (n) of a dlistint_t linked list.
 * @head: pointer to the list.
 *
 * Return: sum of the list data.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *ptr = NULL;

	if (head == NULL)
		return (0);

	ptr = head;
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
