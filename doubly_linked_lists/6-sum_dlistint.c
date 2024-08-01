#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data (n)
 * of a dlistint_t linked list.
 * @head: Pointer to the head of the linked list.
 *
 * Return: The sum of all data in the linked list or 0 if the list is
 * empty.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *node = head;

	if (node == NULL)
		return (0);

	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
