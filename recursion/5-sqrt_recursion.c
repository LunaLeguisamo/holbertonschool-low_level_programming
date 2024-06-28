#include "main.h"

/**
 * find_root - function to find the square root of n
 * @n: number base for obtain the natural square root number
 * @root: number to find the square root of n
 * Return: The natural square root number of n
 */

int find_root(int n, int root)
{
	if (root * root == n)
	{
		return (root);
	}
	else if (root * root > n)
	{
		return (-1);
	}
	else
	{
		return (find_root(n, root + 1));
	}
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: number base for obtain the natural square root number
 * Return: The natural square root number of n
 */

int _sqrt_recursion(int n)
{
	if (n >= 0)
	{
		return (find_root(n, 0));
	}
	else
	{
		return (-1);
	}
}
