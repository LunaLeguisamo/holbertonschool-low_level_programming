#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * find_root - function for find the root of n
 * @root: The square root of n
 * @n: number base for obtain the natural square root number
 * Return: The natural square root number of n
 */

int find_root(int n, int root)
{
	if (root * root == n)
	{
		return (root);
	}
	else if(root * root > n)
	{
		return (-1);
	}
	else
	{
		return (find_root(n, root + 1));
	}
}

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
