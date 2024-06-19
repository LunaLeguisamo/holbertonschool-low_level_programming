#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 *@a: a integer
 *@b: b a integer
 */

void swap_int(int *a, int *b)
{	int tmp;

	tmp = *a;

	*a = *b;
	*b = tmp;
}
