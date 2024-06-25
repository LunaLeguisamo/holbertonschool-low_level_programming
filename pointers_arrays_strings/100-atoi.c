#include "main.h"
#include "2-strlen.c"

/**
 * _atoi - function that convert a string to an integer
 * @s: The string to be changed
 * Return: A pointer to the changed string
 */

int _atoi(char *s)
{
	int counter;
	int len = _strlen(s);
	int sign;
	int numbers;
	int result;

	result = 0;
	numbers = 0;
	sign = 1;

	for (counter = 0; counter < len; counter++)
	{
		if (s[counter] == '-')
			sign = -sign;

		if (s[counter] >= '0' && s[counter] <= '9')
			numbers++;

		if (s[counter] == numbers)
			result += numbers - '0';	
	}
}
