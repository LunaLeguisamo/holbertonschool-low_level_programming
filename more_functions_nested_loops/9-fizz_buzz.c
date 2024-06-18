#include <stdio.h>
/**
 * main - main
 * Return: 0
 * @n: number
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (n % 5 == 0)
		{

			if (n == 100)
			{
				printf("Buzz\n");
			}
			printf("Buzz ");
		}
		else
		{
			printf("%d ", n);
		}
	}
	return (0);
}
