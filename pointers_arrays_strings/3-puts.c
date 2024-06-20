#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line
 * Return: 0
 * @str: an array
 */

void _puts(char *str)
{
	int counter;

	counter = 0;
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		counter++;
	}
	_putchar ('\n');
}
