#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals
 *                  of a square matrix of integers.
 * @a: The matrix of integers.
 * @size: The size of the matrix.
 */
void print_diagsums(int *a, int size)
{
	int counter, sum1 = 0, sum2 = 0;

	for (counter = 0; counter < size; counter++)
	{
		sum1 += a[counter];
		a += size;
	}

	a -= size;

	for (counter = 0; counter < size; counter++)
	{
		sum2 += a[counter];
		a -= size;
	}

	printf("%d, %d\n", sum1, sum2);
}
