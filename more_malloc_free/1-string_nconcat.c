#include "main.h"
#include <stdlib.h>
#include "_strlen.c"

/**
 * string_nconcat - Concatenate two strings
 * @s1: Pointer to concatenate
 * @s2: Pointer to concatenate
 * @n: Number of bytes of s2
 * Return: On success, returns a pointer to the
 * new allocated space of memory. If memory
 * allocation fails return NULL.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int counter;
	unsigned int counter1;
	unsigned int lens1 = _strlen(s1);
	unsigned int lens2 = _strlen(s2);
	char *new_str = malloc(lens1 + n + 1);
	
	if (new_str == NULL)
		return (NULL);

	if (n >= lens2)
		n = lens2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	
	for (counter = 0; counter <= lens1; counter++)
	{
		new_str[counter] = s1[counter];
	}

	for (counter1 = 0; counter1 < n; counter1++)
	{
		new_str[lens1 + counter1] = s2[counter1];
	}
	
	return (new_str);
}
