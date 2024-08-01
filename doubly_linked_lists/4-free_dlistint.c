#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: Pointer to pointer to the head of the dubly linked list.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

