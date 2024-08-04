#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node at index
 * index of a dlistint_t linked list.
 * @head: Pointer to pointer to the head of the linked list.
 * @index: the index of the node that should be deleted.
 *
 * Returns: 1 if it succeeded, -1 if it failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	dlistint_t *prev_node = NULL;
	unsigned int idx = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;

		free(temp);
		return (1);
	}

	while (temp != NULL && idx < index)
	{
		prev_node = temp;
		temp = temp->next;
		idx++;
	}

	if (temp == NULL)
		return (-1);

	if (temp->next != NULL)
		temp->next->prev = prev_node;

	prev_node->next = temp->next;

	free(temp);

	return (1);
}
