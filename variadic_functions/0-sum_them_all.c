#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of parameters passed to the function.
 *
 * Return: The sum of all parameters. If n is 0, return 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list sum;
	unsigned int i, par;

	if (n == 0)
		return (0);

	va_start(sum, n);

	par = 0;
	for (i = 0; i < n; i++)
	{
		par += va_arg(sum, unsigned int);

		va_end(sum);
	}
	return (par);
}
