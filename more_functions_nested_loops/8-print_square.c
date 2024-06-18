#include "main.h"

/**
 * print_square - function that prints a square, followed by a new line.
 * Return: 0
 *@size: the size of the square
 */

void print_square(int size)
{
	int x = 0;


	if (size > 0)
	{
		for (x = 0; x < size ; x++)
		{
			_putchar('#');
		}
	}
	else
	{
		_putchar('\n');
	}
}
