#include "main.h"
#include <stdlib.h>
#include "_strlen.c"

/**
 * array_range - Returns a dynamically allocated array
 * of integers containing a sequence of
 * values from `min` to `max`, inclusive. The returned
 * array includes all integers between
 * `min` and `max`, in ascending order.
 * @min: An integer specifying the starting value of the range.
 * @max: An integer specifying the ending value of the range.
 * Return: If `min > max`, returns `NULL`.
 * Otherwise, returns a pointer to an array of integers containing the sequence
 * from `min` to `max`.
 */

int *array_range(int min, int max)
{
	int *array;
	int len;
	int counter;

	if (min > max)
		return (NULL);

	if (min == max)
		len = 1;
	else
		len = max - min;

	array = malloc((1 + len) * sizeof(int));

	if (array == NULL)
		return (NULL);

	for (counter = 0; counter < len; counter++)
	{
		array[counter] = min;
		min++;
	}
	return (array);
}
