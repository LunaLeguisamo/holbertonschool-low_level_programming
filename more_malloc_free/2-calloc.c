#include "main.h"
#include <stdlib.h>
#include "_strlen.c"

/**
 * _calloc - function that allocates memory for an array, using mallo
 * @size: Number of bytes to the array
 * @nmemb: Number of elements of the array
 * Return: If nmemb or size is 0, return NULL. If malloc fails, return NULL.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memory;
	unsigned int counter;
	char *zero;

	if (nmemb == 0)
		return (NULL);

	if (size == 0)
		return (NULL);

	memory = malloc(nmemb * size);

	if (memory == NULL)
		return (NULL);

	zero = memory;

	for (counter = 0; counter < (nmemb * size); counter++)
	{
		zero[counter] = 0;
	}

	return (memory);
}