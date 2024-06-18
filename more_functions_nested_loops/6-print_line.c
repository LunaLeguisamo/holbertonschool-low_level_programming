#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal.
 * Return: 0
 *@n: the number of times the character _ should be printed
 */

void print_line(int n)
{
	int counter = 0;

	if (n > 0)
	{
	for (counter = 0; counter < n ; counter++)
	{
		_putchar('_');

	}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
