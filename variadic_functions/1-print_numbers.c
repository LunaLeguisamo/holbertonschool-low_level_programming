#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list print;
	unsigned int i, sum;

	va_start(print, n);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(print, unsigned int);
		if (separator == NULL || i == n - 1)
		{
			printf("%d", sum);
		}
		else
		{
			printf("%d%s", sum, separator);
		}
		va_end(print);
	}
	printf("\n");
}
