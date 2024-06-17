#include "main.h"

/**
 * print_alphabet - main
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
		}
	while(times <= 10);

	_putchar('\n');
}
