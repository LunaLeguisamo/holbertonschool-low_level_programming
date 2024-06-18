#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 * Return: 0
 * @c: a letter
 **/

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
