#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	size_t len;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	len = strlen(str);

	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->len = len;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
