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
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		while (alphabet != 'q' & alphabet != 'e')
		{
			putchar(alphabet);
		}
	}

	putchar('\n');

	return (0);
}
