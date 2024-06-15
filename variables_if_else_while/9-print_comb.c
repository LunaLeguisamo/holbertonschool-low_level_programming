#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - main
 *
 * Return: 0
 */

int main(void)
{
	int numbers;

	for (numbers = 0; numbers <= 9; numbers++)

	{
		putchar('0' +numbers);

		if (numbers == 9)
			continue;
			putchar(',');
			putchar(' ');
		
	}

	putchar('\n');

	return (0);
}
