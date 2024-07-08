#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function that prints a struct dog
 * Return: Information about the struct dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		printf(" ");
	if (d->name == NULL)
		printf("Name: (nil)");
	if (d->owner == NULL)
		printf("nil");

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);

}
