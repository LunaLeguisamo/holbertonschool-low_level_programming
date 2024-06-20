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

void rev_string(char *s);
{
	int len = _strlen(s);
	char *start = s;
	char *end = s + len - 1;

	while (start < end)
	{
		swap_int(start, end);
		start++;
		end--;
	}
	_putchar(s);
}
