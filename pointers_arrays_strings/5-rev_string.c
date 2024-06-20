#include "main.h"

/**
 * _strlen -  function that returns the length of a string
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
 * rev_ string - function that reverses a string
 * @s: a pointer
 */

void rev_string(char *s)
{
	int len = _strlen(s);
	char array[800];
	int var;
	int counter;

	var = 0;
	counter = 0;
	for (counter = 0; counter <= len; counter++)
	{
		array[counter] = s[counter];
	}

	for (counter = len - 1; counter >= 0; counter--)
	{
		s[var] = array[counter];
		var++;
	}
}
