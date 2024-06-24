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
 * *_strncat - function that concatenates two strings
 * Return: (*dest)
 * @src: pointer that have a string
 * @dest: pointer for copy
 * @n: bytes from src
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = _strlen(dest);
	int counter;

	for (counter = 0; counter < n && src[counter] != '\0'; counter++)
	{
		dest[dest_len + counter] = src[counter];
	}
	dest[dest_len + counter] = '\0';
	return (dest);
}
