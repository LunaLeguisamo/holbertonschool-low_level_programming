#include "main.h"

/**
 * *cap_string -  function that capitalizes all words of a string
 * @p: The string to be changed
 * Return: A pointer to the changed string
 */

char *cap_string(char *p)
{
	int counter;

	counter = 0;
	while (p[counter])
	{
		while (!(p[counter] >= 'a' && p[counter] <= 'z'))
			counter++;

		if (p[counter - 1] == ' ' ||
		    p[counter - 1] == '\t' ||
		    p[counter - 1] == '\n' ||
		    p[counter - 1] == ',' ||
		    p[counter - 1] == ';' ||
		    p[counter - 1] == '.' ||
		    p[counter - 1] == '!' ||
		    p[counter - 1] == '?' ||
		    p[counter - 1] == '"' ||
		    p[counter - 1] == '(' ||
		    p[counter - 1] == ')' ||
		    p[counter - 1] == '{' ||
		    p[counter - 1] == '}' ||
		    counter == 0)
			p[counter] ^= 32;

		counter++;
	}

	return (p);
}
