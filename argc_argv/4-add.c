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
	int counter, counter2;
	int sum;

	sum = 0;
	for (counter = 1; counter < argc; counter++)
	{
		sum += atoi(argv[counter]);

		for (counter2 = 0; argv[counter][counter2] != '\0'; counter2++)
		{
			if (!(isdigit(argv[counter][counter2])))
			{
				printf("Error\n");
				return (0);
			}
		}
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
