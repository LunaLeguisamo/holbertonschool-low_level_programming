#include "lists.h"

/**
 * print_list - Prints all the elements of a linked list of type list_t.
 * @h: Pointer to the head of the linked list.
 *
 * Description: This function traverses a linked list of type list_t and
 *              prints the length and the string of each node. If a node's
 *              string is NULL, it prints "(nil)" with length 0.
 *
 * Return: The number of nodes in the linked list.
 */

size_t print_list(const list_t *h)
{
	int counter = 0;

	const list_t *head = h;

	while (head != NULL)
	{
		if (head->str == NULL)
		{
			printf("[0] (nil)\n");
			head = head->next;
			counter++;
		}
		else
		{
			printf("[%d] %s\n", head->len, head->str);
			head = head->next;
			counter++;
		}
	}
		return (counter);
}
