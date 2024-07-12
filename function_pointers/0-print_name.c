#include "function_pointers.h"

/**
 * print_name - Prints a name using a given function pointer
 * @name: Pointer to a string containing the name to print.
 * @f: Pointer to a function that takes a char pointer argument.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
