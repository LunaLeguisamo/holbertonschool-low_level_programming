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
 * _strcpy - function that copies the string pointed to by src,
 *  including the terminating null byte (\0), to the buffer pointed to by dest.
 * Return: (*dest)
 * @src: pointer that have a string
 * @dest: pointer for copy
 */

char *_strcpy(char *dest, char *src)
{
	int len = _strlen(src);
	int counter;

	for (counter = 0; counter <= len; counter++)
	{
		dest[counter] = src[counter];
	}
	return (dest);
}
