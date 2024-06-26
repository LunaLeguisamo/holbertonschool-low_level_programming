#include "main.h"
#include "2-strlen.c"

/**
 * *_strchr - function that locates a character in a string
 * @s: a string
 * @c: a letter
 * Return: a pointer to the memory area s
 */

char *_strchr(char *s, char c)
{
	int counter;
	int len = _strlen(s);
	char *p;

	for (counter = 0; counter <= len; counter++)
	{
		if (s[counter] == c)
		{
			p = &s[counter];
			return (p);
		}
	}
	return (0);
}
