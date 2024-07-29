#include "lists.h"

int _strlen(char *str)
{
	int counter = 0;
	while (str != NULL)
	{
		counter++;
	}
	return (counter);
}

/**
 * add_node - Adds a new node at the beginning of a linked list of type list_t.
 * @head: Double pointer to the head of the linked list.
 * @str: String to be added to the new node.
 *
 * Description: This function creates a new node, initializes it with the
 *              provided string, and inserts it at the beginning of the
 *              linked list. The head of the list is updated to point to
 *              the new node.
 *
 * Return: A pointer to the newly added node, or NULL if memory allocation
 *         fails.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	int counter = 0;

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
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
