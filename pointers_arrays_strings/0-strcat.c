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
 * *_strcat - function that concatenates two strings
 * Return: (*dest)
 * @src: pointer that have a string
 * @dest: pointer for copy
 */

char *_strcat(char *dest, char *src)
{
	int dest_len = _strlen(dest);
	int src_len = _strlen(src);
	int counter;

	for (counter = 0; counter < src_len ; counter++)
	{
		dest[dest_len + counter] = src[counter];
	}
	return (dest);
}
