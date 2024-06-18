#include "main.h"

/**
 * jack_bauer - main
 * Return: 0
 */

void jack_bauer(void)
{
	int min1;
	int min2;
	int h1;
	int h2;

	for (h1 = 0; h1 <= 2; h1++)
	{
		for (h2 = 0; h2 <= 9; h2++)
		{
			if (h1 == 2 && h2 == 4)
				break;
			for (min1 = 0; min1 <= 5; min1++)
			{
				for (min2 = 0; min2 <= 9; min2++)
				{
					_putchar('0' + h1);
					_putchar('0' + h2);
					_putchar(':');
					_putchar('0' + min1);
					_putchar('0' + min2);
					_putchar('\n');
				}
			}
		}
	}
}
