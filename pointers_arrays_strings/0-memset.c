#include "main.h"
#include "2-strlen.c"

/**
 * *_memset - function that fills memory with a constant byte
 * @n: bytes of the memory area pointed to by s
 * @s: pointer of n
 * @b: constant byte
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int counter;

	for (counter = 0; counter < n; counter++)
	{
		s[n] = b;
	}
	return (s);
}
