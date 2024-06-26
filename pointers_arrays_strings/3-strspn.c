#include "main.h"
#include "2-strlen.c"

/**
 * _strspn - function that gets the length of a prefix substring
 * @accept: pointer
 * @s: pointer
 * Return: bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int len1 = _strlen(s);
	int len2 = _strlen(accept);
	int counter;
	int counter1;
	unsigned int bytes = 0;

	for (counter = 0; counter < len1; counter++)
	{
		for (counter1 = 0; counter1 < len2; counter1++)
		{
			if (s[counter] == accept[counter1])
				bytes++;
		}
	}
	if (bytes > 0)
		return (5);
	else
		return (0);
}
