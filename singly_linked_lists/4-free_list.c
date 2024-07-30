#include "lists.h"

/**
 * free_list - Frees a linked list.
 * @head: A pointer to the head of the list to be freed.
 */

void free_list(list_t *head)
{
	list_t *node;

	while (head != NULL)
	{
		node = head;
		head =  head->next;
		free(node->str);
		free(node);
	}
}
