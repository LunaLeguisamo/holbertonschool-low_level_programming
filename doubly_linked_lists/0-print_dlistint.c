#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a doubly
 * linked list of type dlistint_t.
 * @h: Pointer to the head of the doubly linked list.
 *
 * Return: The number of nodes in the doubly linked list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *head = h;
	int counter = 0;

	while (head != NULL)
	{
		counter++;
		printf("%d\n", head->n);
		head = head->next;
	}
	return (counter);
}
