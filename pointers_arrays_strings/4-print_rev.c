#include "main.h"

#include "main.h"

/**
 * _strlen -  function that returns the length of a string.
 * Return: 0
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
 * print_rev - function that prints a string, in reverse,
 * followed by a new line
 * Return: 0
 * @s: an array
 */

void print_rev(char *s)
{
	int counter;
	int n;
	
	counter = _strlen(s);
	for (n = (counter - 1); n >= 0; n--)
	{
		_putchar(s[n]);
		counter++;
	}
	_putchar ('\n');
}
