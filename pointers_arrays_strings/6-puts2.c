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
 * puts2 - function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: a pointer
 */

void puts2(char *str)
{
	int len;
	int counter;

	len = _strlen(str);
	for (counter = 0; counter <= len; counter++)
	{
		_putchar(str[counter]);
		counter++;
	}
	_putchar('\n');
}
