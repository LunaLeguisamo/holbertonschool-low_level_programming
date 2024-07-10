#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - Structure to free the memory of dog_t
 * @d: Pointer to dog_t
 * Return: Nothing
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
