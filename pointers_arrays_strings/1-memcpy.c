#include "main.h"
#include "2-strlen.c"

/**
 * *_memcpy - function that copies memory area
 * @n: bytes of the memory area of src
 * @src: pointer of dest
 * @dest: pointer
 * Return: a pointer to the dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int counter;

	for (counter = 0; counter < n; counter++)
	{
		dest[counter] = src[counter];
	}
	return (dest);
}
