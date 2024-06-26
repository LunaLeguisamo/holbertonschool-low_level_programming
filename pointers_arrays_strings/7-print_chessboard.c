#include "main.h"

/**
 * print_chessboard - Prints a chessboard.
 * @a: The chessboard to be printed.
 */
void print_chessboard(char (*a)[8])
{
	int counter1, counter2;

	for (counter1 = 0; a[counter1][7]; counter1++)
	{
		for (counter2 = 0; counter2 < 8; counter2++)
			_putchar(a[counter1][counter2]);

		_putchar('\n');
	}
}
