#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars initialized with a specific char
 * @size: the size of the array to be created
 * @c: the char to initialize the array with
 *
 * Return: If size is 0 or memory allocation fails, return NULL.
 * Otherwise, return a pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int counter;
	char *array;

	array = malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);

	if (array == NULL)
		return (NULL);

	for (counter = 0; counter < size; counter++)
	{
		array[counter] = c;
	}
	return (array);
}
