#include "main.h"
#include "2-strlen.c"

/**
 * *leet - function that encodes a string into 1337
 * @p: The string to be changed
 * Return: A pointer to the changed string
 */

char *leet(char *p)
{
	char letters[5] = {'A', 'E', 'O', 'T', 'L'};
	int numbers[5] = {4, 3, 0, 7, 1};
	int counter;
	int counter1 = 0;
	int len = _strlen(p);

	for (counter = 0; counter < len; counter++)
	{
			while (counter1 < 5)
			{
				if (p[counter] == letters[counter1] ||
						p[counter] == letters[counter1] + 32)
				{
					p[counter] = numbers[counter1] + '0';
				}
				counter1++;
			}
			counter1 = 0;
	}
	return (p);
}
