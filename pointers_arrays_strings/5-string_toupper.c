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
 *
 * Return: nothing.
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
