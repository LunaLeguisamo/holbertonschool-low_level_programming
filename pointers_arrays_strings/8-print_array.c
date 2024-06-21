#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array of integers
 * @a: array with integers
 * @n: the number of elements of the array to be printed
 */

void print_array(int *a, int n)
{
	int counter;

	for (counter = 0; counter <= n - 1; counter++)
	{
		if (counter == n - 1)
		{
			printf("%d", a[counter]);
		}
		else
		{
			printf("%d, ", a[counter]);
		}
	}
	printf("\n");
}
