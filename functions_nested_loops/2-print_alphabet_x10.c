#include "main.h"

/**
 * print_alphabet_x10 - main
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char alphabet;
	int times = 0;

	do {

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
		times++;
		_putchar('\n');
		}
	while (times < 10);

}
