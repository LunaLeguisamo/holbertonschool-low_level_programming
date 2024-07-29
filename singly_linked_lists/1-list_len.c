#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list of type list_t.
 * @h: Pointer to the head of the linked list.
 *
 * Description: This function traverses the linked list starting from the head
 *              and counts the number of nodes present in the list.
 *
 * Return: The number of nodes in the linked list.
 */

size_t list_len(const list_t *h)
{
	int counter;
	const list_t *head = h;

	while (head != NULL)
	{
		counter++;
		head = head->next;
	}

	return(counter);
}
