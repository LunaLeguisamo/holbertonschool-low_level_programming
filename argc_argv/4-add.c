#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - check the code
 * @argc: count of the arguments supplied to the program
 * @argv: array of pointers to the strings which are those arguments
 * Return: Always 0.
 */

int main(int argc,  char **argv)
{
	int counter;
	int sum;

	sum = 0;
	for (counter = 1; counter < argc; counter++)
	{
		sum += atoi(argv[counter]);
	}

	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}

	if (argc > 1)
	{
		printf("%d\n", sum);
		return (0);
	}
	return (0);
}
