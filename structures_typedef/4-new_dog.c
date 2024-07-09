#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen -  function that returns the length of a string.
 * Return: 0
 * @s: a pointer
 */

int _strlen(char *s)
{
	int counter;

	counter = 0;
	while (s[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}

/**
 * _strdup - Duplicate a string in newly allocated memory.
 * @str: Pointer to the string to duplicate.
 *
 * Return: If successful, a pointer to the duplicated string.
 *         If insufficient memory was available, NULL.
 */

char *_strdup(char *str)
{
	char *dup;
	unsigned int counter;
	unsigned int size;

	if (str == NULL)
		return (NULL);

	size = _strlen(str) + 1;

	dup = malloc(size * sizeof(char));

	if (dup == 0)
		return (NULL);

	for (counter = 0; counter < size; counter++)
	{
		dup[counter] = str[counter];
	}
	return (dup);
}

/**
 * new_dog - Pointer that points out to dog_t
 * @name: Name of the dog
 * @age: age of the dog
 * @owner: Name of the owner of the dog
 * Return: Information about the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *new_name = _strdup(name);
	char *new_owner = _strdup(owner);

	if (new_name == NULL)
	{
		return(NULL);
	}

	if (new_owner == NULL)
	{
		free(new_name);
		return (NULL);
	}

	new_dog = malloc(sizeof(dog_t));
	
	if (new_dog == NULL)
	{
		free(new_name);
		free(new_owner);
		return (NULL);
	}

	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = new_owner;

	return (new_dog);
}
