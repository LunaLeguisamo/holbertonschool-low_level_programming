#include "main.h"

/**
 * _isupper - function that checks for uppercase character.
 *
 * Return: 0
 *
 * @c: Returns 1 if the input is lowercase
 * @c: Returns 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
