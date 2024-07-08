#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * init_dog - a function that initialize a variable
 * of type struct dog
 * @d: A pointer to dereferencing dog
 * @name: variable with the name of the dog
 * @age: Variable with the age of the dog
 * @owner: Variable with the name of the owner of the dog
 * Return: The news variables of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
