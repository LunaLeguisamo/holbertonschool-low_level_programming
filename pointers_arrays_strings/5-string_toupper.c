#include "main.h"

/**
 * _strlen -  function that returns the length of a string
 * Return: (counter)
 * @s: a pointer
 */

int _strlen(char *s)
{
	int counter;

	counter = 0;
	while (s[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}

/**
 * *string_toupper - function that changes all lowercase
 * letters of a string to uppercase
 * @p: The string to be changed
 * Return: A pointer to the changed string
 */

char *string_toupper(char *p)
{
	int counter;

	counter = 0;
	while (p[counter])
	{
		if (p[counter] >= 'a' && p[counter] <= 'z')
			p[counter] ^= 32;

		counter++;
	}

	return (p);
}
