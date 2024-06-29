#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	int counter;

	for (counter = 0; counter < argc; counter++)
	{
		printf("%s\n", argv[counter]);
	}
	return (0);
}
