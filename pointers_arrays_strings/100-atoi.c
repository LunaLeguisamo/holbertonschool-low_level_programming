#include "main.h"
#include "2-strlen.c"
#include <stdio.h>

/**
 * _atoi - function that convert a string to an integer
 * @s: The string to be changed
 * Return: A pointer to the changed string
 */

int _atoi(char *s)
{
	int counter;
	int len = _strlen(s);
	int sign = 1;
	int numbers = 0;
	int v = 1;
	int mult = 1;
	int result = 0;

	for (counter = 0; counter < len; counter++)
	{
		if (s[counter] == '-')
			sign = -sign;

		if (s[counter] >= '0' && s[counter] <= '9')
		{
			if (s[counter + 1] >= '0' && s[counter + 1] <= '9')
				numbers++;
			else
			{
				numbers++;
				break;
			}
		}
	}
	for (counter = 0; counter < len; counter++)
	{
		if (s[counter] >= '0' && s[counter] <= '9')
		{
			for (v = 1; v < numbers; v++)
			{
				mult *= 10;
			}
			numbers--;
			result += (s[counter] - '0') * mult * sign;
			mult = 1;
			if (numbers == 0)
				break;
		}
	}
	return (result);
}
