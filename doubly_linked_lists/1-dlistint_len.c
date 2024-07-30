#include "lists.h"

/**
 * dlistint_len - Return the number of nodes in the doubly
 * linked list of type dlistint_t.
 * @h: Pointer to the head of the doubly linked list.
 *
 * Return: The number of nodes in the lists.
 */

size_t dlistint_len(const dlistint_t *h)
{
	int counter = 0;

	const dlistint_t *head = h;

	while (head != NULL)
	{
		if (head == NULL)
		{
			counter++;
		}
		else
		{
			counter++;
			head = head->next;
		}
	}
	return (counter);
}
