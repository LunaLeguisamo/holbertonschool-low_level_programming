#include "main.h"

/**
 * _abs - main
 * @a: value of integer
 * Return: 0
 */

int _abs(int a)
{
	if (a < 0)
	{
		a = a * -1;
		return (a);
	}
	else
	{
		a = a;
		return (a);
	}
}
