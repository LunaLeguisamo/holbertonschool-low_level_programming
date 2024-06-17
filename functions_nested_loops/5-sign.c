#include "main.h"

/**
 * print_sign - main
 * Return: 0
 * @n: returns 1 and prints + if n is greater than zero
 * @n: returns 0 and prints 0 if n is zero
 * @n: returns -1 and prints - if n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n < 0)
	{
		return (-1);
		_putchar('-');
	}
	else
	{
		return (0);
		_putchar('0');
	}

	return (0);
}
