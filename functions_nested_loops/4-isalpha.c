#include "main.h"

/**
 * int _isalpha(int c) - main
 * int _isalpha(int c ) checks for alphabetic character
 * Return: 0
 * @c: Returns 1 if the input is lowercase or uppercase
 * @c: Returns 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
