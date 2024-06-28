#include "main.h"

/**
 * is_prime_number - function that returns the natural square root of a number
 * @n: number base
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	if (n % n == 0 && n % 1 == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
