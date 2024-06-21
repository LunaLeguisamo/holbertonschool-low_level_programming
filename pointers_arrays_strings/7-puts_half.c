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
 * puts_half - function that prints half of a string,
 * followed by a new line. The function should print
 * the second half of the string
 * If the number of characters is odd, the function
 * should print the last n characters
 * of the string, where n = (length_of_the_string - 1) / 2
 * @str: a pointer
 */

void puts_half(char *str)
{
	int len;
	int i;
	int n;
	int counter;

	len = _strlen(str);
	i = len / 2;
	n = (len - 1) / 2;
	for (counter = i; counter < len - 1; counter++)
	{
		if (len % 2 != 0)
		{
			n++;
			_putchar(str[n]);
		}
	else
	{
		i++;
		_putchar(str[i]);
	}
	}
	_putchar('\n');
}
