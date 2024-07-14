#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between the strings.
 * @n: The number of strings passed to the function.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list print;
	unsigned int i;
	char *str;

	va_start(print, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(print, char*);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else if (separator == NULL || i == n - 1)
		{
			printf("%s", str);
		}
		else
		{
			printf("%s%s", str, separator);
		}
	}
	printf("\n");
	va_end(print);
}
