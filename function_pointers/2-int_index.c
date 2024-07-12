#include "function_pointers.h"

/**
 * int_index - Find the index of an integer in an array
 * using a custom comparison function.
 * @array: Pointer to the array of integers.
 * @size: Size of the array.
 * @cmp: Pointer to the comparison function which returns 0
 * if the elements match.
 * Return: Index of the first matching element, or -1 if no match is found.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 0)
			return (i);
	}
	return (-1);
}
