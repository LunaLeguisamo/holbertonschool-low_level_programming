#include "main.h"

/**
 * mult - function that search if a number is prime
 * @n: number base
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */

int mult(int n, int i)
{
	if (n < 2)
		return (0);
	if (n == i)
		return (1);
	if (n % i == 0)
		return (0);
	return (mult(n, i + 1));
}

/**
 * is_prime_number - function that returns the natural square root of a number
 * @n: number base
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	return (mult(n, 2));
}
