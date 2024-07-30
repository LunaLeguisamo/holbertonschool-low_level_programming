#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a linked list of type list_t.
 * @head: Double pointer to the head of the linked list.
 * @str: String to be added to the new node.
 *
 * Description: This function creates a new node, initializes it with the
 *provided string, and inserts it at the end of the linked list.
 *
 * Return: A pointer to the newly added node, or NULL if memory allocation
 *         fails.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int counter = 0;
	list_t *newNode;
	list_t *lastNode;

	while (str[counter] != '\0')
		counter++;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);

	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->len = counter;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	lastNode = *head;
	while (lastNode->next != NULL)
		lastNode = lastNode->next;

	lastNode->next = newNode;

	return (newNode);
}
