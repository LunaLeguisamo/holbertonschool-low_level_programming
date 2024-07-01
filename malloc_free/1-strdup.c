#include "main.h"
#include <stdlib.h>
#include "_strlen.c"
/**
 * _strdup - Duplicate a string in newly allocated memory.
 * @str: Pointer to the string to duplicate.
 *
 * Return: If successful, a pointer to the duplicated string.
 *         If insufficient memory was available, NULL.
 */

char *_strdup(char *str)
{
	char *dup;
	unsigned int counter;
	unsigned int size;

	if (str == NULL)
		return (NULL);

	size = _strlen(str) + 1;

	dup = malloc(size * sizeof(char));

	if (dup == 0)
		return (NULL);

	for (counter = 0; counter < size; counter++)
	{
		dup[counter] = str[counter];
	}
	return (dup);
}
