#ifndef function_pointers_h
#define function_pointers_h
/**
 * print_name - Prints a name using a given function pointer
 * @name: Pointer to a string containing the name to print.
 * @f: Pointer to a function that takes a char pointer argument.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
#endif /* FUNCTION_POINTERS_H */
