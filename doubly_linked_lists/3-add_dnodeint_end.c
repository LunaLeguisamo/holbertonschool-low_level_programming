#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at
 * the end of a dlistint_t list.
 * @head: Double pointer to the head of the doble list.
 * @n: Int to be added to the new node.
 *
 * Return: A pointer to the new node or NULL if the memory
 * fails.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	dlistint_t *lastNode;

	newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
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

	if (*head != NULL)
	{
		(*head)->prev = newNode;
	}

	return (newNode);
}
