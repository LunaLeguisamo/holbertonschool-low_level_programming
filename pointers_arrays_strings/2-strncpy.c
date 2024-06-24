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
 * *_strncpy - function that copies a string
 * Return: (*dest)
 * @src: pointer that have a string
 * @dest: pointer for copy
 * @n: bytes of src
 */

char *_strncpy(char *dest, char *src, int n)
{
	int counter;

	for (counter = 0; counter < n && src[counter] != '\0'; counter++)
	{
		dest[counter] = src[counter];
	}
	for ( ; counter < n; counter++)
	{
	dest[counter] = '\0';
	}
	return (dest);
}
