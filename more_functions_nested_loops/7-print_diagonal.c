#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * Return: 0
 * @n: is the number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	int x = 0;
	int y;

	if (n > 0)
	{
		for (x = 0; x < n ; x++)
		{
			for (y = 0; y < x; y++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
