#include "main.h"

/**
 * times_table - main
 * Return: 0
 * int: a var
 */

void times_table(void)
{
	int num = 0;

	for (num = num * 0)
	{
		_putchar('0' + num);
		_putchar(',');
		_putchar(' ');
		_putchar('\n');

		for (num = 0; num <= 1; num <= 9; num++)
		{
			_putchar('0' + num);
			_putchar(',');
			_putchar(' ');
			_putchar('\n');
			for (num = 0; num <= 2; num <= 18; num++)
			{
				_putchar('0' + num);
				_putchar(',');
				_putchar(' ');
				_putchar('\n');
			}
		}
	}
}
