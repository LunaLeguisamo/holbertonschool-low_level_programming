#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * @argc: count of the arguments supplied to the program
 * @argv: array of pointers to the strings which are those arguments
 * Return: Always 0.
 */

int main(int argc,  __attribute__((unused)) char **argv)
{
	if (argc <= 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
	}
}