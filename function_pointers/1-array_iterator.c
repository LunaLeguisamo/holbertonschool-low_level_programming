#include "function_pointers.h"

/**
 * array_iterator - Executes a given function on each element of an array.
 * @array: Pointer to the integer array.
 * @size: Number of elements in the array.
 * @action: Pointer to the function to be called on each element.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}