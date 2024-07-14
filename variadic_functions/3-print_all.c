#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_all - Prints anything, followed by a new line.
 * @format: A list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	va_list print;
	int counter = 0, counter1 = 0;
	char *separator = "";
	const char *a_print = "cifs";

	va_start(print, format);
	while (format && format[counter])
	{
		while (a_print[counter1])
		{
			if (format[counter] == a_print[counter1])
			{
				printf("%s", separator);
				switch (format[counter])
				{
					case 'c':
						printf("%c", va_arg(print, int));
						break;
					case 'i':
						printf("%d", va_arg(print, int));
						break;
					case 'f':
						printf("%f", va_arg(print, double));
						break;
					case 's':
						if (va_arg(print, char *) == NULL)
							printf("(nil)");
						printf("%s", va_arg(print, char *));
						break;
				}
				separator = ", ";
				break;
			}
			counter1++;
		}
		counter++;
	}
	printf("\n");
	va_end(print);
}
