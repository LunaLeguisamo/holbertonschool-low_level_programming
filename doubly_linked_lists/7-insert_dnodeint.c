#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node
 * at a given position.
 * @idx: The position in the index where the node must be added.
 * @h: Pointer to pointer to the head of the linked list.
 * @n: Int to add to the new node.
 *
 * Return: The direction of the new node added or NULL if it fails.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int index = 0;
	dlistint_t *nodo = *h;
	dlistint_t *newNodo;

	newNodo = malloc(sizeof(dlistint_t));

	if (newNodo == NULL)
		return (NULL);

	newNodo->n = n;

	if (idx == 0)
	{
		newNodo->next = *h;
		*h = newNodo;
		newNodo->prev = NULL;
		return (newNodo);
	}

	while (nodo != NULL && index < idx)
	{
		nodo = nodo->next;
		index++;
	}

	if (nodo == NULL)
	{
		free(newNodo);
		return (NULL);
	}

	newNodo->next = nodo->next;
	newNodo->prev = nodo;

	if (nodo->next != NULL)
	{
		nodo->prev->next = newNodo;
	}

	nodo->next = newNodo;

	return (newNodo);
}
