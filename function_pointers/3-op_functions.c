#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - Adds two integers.
 * @a: The first integer to be added.
 * @b: The second integer to be added.
 *
 * Return: The result of the addition of a and b.
 */

int op_add(int a, int b)
{
	int c;

	c = a + b;

	return (c);
}

/**
 * op_sub - Subtracts two integers.
 * @a: The integer to subtract from.
 * @b: The integer to subtract.
 *
 * Return: The result of the subtraction of b from a.
 */

int op_sub(int a, int b)
{
	int c;

	c = a - b;

	return (c);
}


/**
 * op_mul - Multiplies two integers.
 * @a: The first integer operand.
 * @b: The second integer operand.
 *
 * Return: The result of multiplying a and b.
 */

int op_mul(int a, int b)
{
	int c;

	c = a * b;

	return (c);
}

/**
 * op_div - Divides two integers.
 * @a: The dividend integer.
 * @b: The divisor integer.
 * Return: The result of dividing a by b.
 */

int op_div(int a, int b)
{
	int c;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	c = a / b;

	return (c);
}

/**
 * op_mod - Computes the remainder of dividing two integers.
 * @a: The dividend integer.
 * @b: The divisor integer.
 *
 * Return: The remainder of dividing a by b.
 */

int op_mod(int a, int b)
{
	int c;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	c = a % b;

	return (c);
}

