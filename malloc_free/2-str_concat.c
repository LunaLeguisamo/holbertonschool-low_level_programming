#include "main.h"
#include <stdlib.h>
#include "_strlen.c"

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to concatenated string on success.
 *         NULL if memory allocation fails.
 */

char *str_concat(char *s1, char *s2)
{
	char *con;
	unsigned int size, size1, size2, counter, counter1;

	size = _strlen(s1);
	size1 = _strlen(s2);
	size2 = size + size1 + 1;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	con = malloc(size2 * sizeof(char));

	if (con == NULL)
		return (NULL);

	for (counter = 0; counter < size; counter++)
	{
		con[counter] = s1[counter];
	}

	for (counter1 = 0; counter1 < size2; counter1++)
	{
		con[size + counter1] = s2[counter1];
	}
	con[size + size2] = '\0';
	return (con);
}
