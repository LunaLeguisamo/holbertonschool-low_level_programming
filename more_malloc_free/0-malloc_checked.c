#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocate memory using malloc
 * Return: A pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *memory;

	memory = malloc(b * sizeof(unsigned int));

	if (memory == NULL)
		exit(98);

	return (memory);
}
