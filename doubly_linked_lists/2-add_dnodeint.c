#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at
 * the beginning of a dlistint_t list.
 * @head: Double pointer to the head of the linked list.
 * @n: Int to be added to the new node.
 *
 * Return: A pointer to the new node added or NULL
 * if the memory allocation fails.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	if (head == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	newNode->prev = NULL;

	return (newNode);
}
