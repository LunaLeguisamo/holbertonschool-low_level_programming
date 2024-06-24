#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements of a
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
	int b[n];
	int var;
	int counter;

	var = 0;
	for (counter = 0; counter <= n; counter++)
	{
		b[counter] = a[counter];
	}

	for (counter = n - 1; counter >= 0; counter--)
	{
		a[var] = b[counter];
		var++;
	}
}
