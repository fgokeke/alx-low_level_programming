#include "lists.h"
#include <stdio.h>

/**
 * count_looped_listint - count nodes in a
 * possibly looped listint_t list.
 * @head: pointer to the list.
 *
 * Return: number of nodes in the list
 * or 0 if there is no loop.
 */
size_t count_looped_listint(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t count_nodes = 1;

	if (!head || !(head->next))
		return (0);

	slow = head->next;
	fast = (head->next)->next;
	while (fast)
	{
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				count_nodes++;
				slow = slow->next;
				fast = fast->next;
			}
			slow = slow->next;
			while (slow != fast)
			{
				count_nodes++;
				slow = slow->next;
			}
			return (count_nodes);
		}
		slow = slow->next;
		fast = (fast->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - a function that prints a
 * listint_t linked list.
 * @head: pointer to the list.
 *
 * Return: the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t printed_nodes = 0, count_nodes = count_looped_listint(head);

	if (count_nodes == 0)
	{
		while (head)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			count_nodes++;
		}
	}
	else
	{
		while (printed_nodes < count_nodes && head)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			printed_nodes++;
		}
		if (head)
		{
		printf("-> [%p] %d\n", (void *)head, head->n);
		}
	}
	return (count_nodes);
}
