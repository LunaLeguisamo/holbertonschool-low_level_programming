#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node
 * of a dlistint_t linked list
 * @head: Pointer to the head of the doubly linked list.
 * @index: The index of the node, starting from 0.
 *
 * Return: The new node when the counter match with the index
 * or NULL if nevwe match.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter;
	dlistint_t *newNode = head;

	newNode = malloc(sizeof(dlistint_t));

	while (newNode != NULL)
	{
		if (counter == index)
		{
			return (newNode);
		}
		else
		{
			newNode = newNode->next;
			counter++;
		}
	}
	return (NULL);
}
