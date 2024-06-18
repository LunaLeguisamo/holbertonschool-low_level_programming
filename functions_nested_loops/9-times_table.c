#include "main.h"

/**
 * times_table - main
 * Return: 0
 * int: a var
 */

void times_table(void)
{
	int x;
	int y;
	int mul;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			mul = x * y;
			if (y == 0)
			{
				_putchar('0' + mul);
			}
			else if ((x * y) > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (mul / 10));
				_putchar('0' + (mul % 10));
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + (x * y));
			}
		}
		_putchar('\n');
	}
}
