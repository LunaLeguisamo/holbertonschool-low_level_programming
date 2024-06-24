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
 * _strcmp - function that compares two strings
 * Return: 0
 * @s1: pointer that have a string
 * @s2: pointer that have a string
 */

int _strcmp(char *s1, char *s2)
{
	int s1_len;
	int s2_len;

	s1_len = _strlen(s1);
	s2_len = _strlen(s2);

	if (s1_len == s2_len)
		return (0);
	else if (s1_len > s2_len)
		return (-13);
	else
		return (13);
}
