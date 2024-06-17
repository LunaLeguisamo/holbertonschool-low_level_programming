
#include "main.h"

/**
 * print_last_digit - main
 * Return: 0
 * @a: a number
 */

int print_last_digit(int a)
{
	if (a < 0)
	{
		a = -1 * (a % 10);
		_putchar(a + '0');
		return (a);
	}
	else
	{
		a = a % 10;
		_putchar(a + '0');
		return (a);
	}
}
