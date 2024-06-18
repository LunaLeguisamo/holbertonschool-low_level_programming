#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * Return: 0
 * @n: is the number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	int counter = 0;

	if (n > 0)
	{
		for (counter = 0; counter < n ; counter++)
		{
			_putchar('\\');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
