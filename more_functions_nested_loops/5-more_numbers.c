#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 * Return: 0
 */

void more_numbers(void)
{
	int n;
	int t;

	for (t = 0; t < 10; t++)
	{
		for(n = 0; n < 15; n++)
		{
			if (n > 9)
			{_putchar('0' + n / 10);
			}
			_putchar('0' + n % 10);
		}
		_putchar('\n');
	}
}
