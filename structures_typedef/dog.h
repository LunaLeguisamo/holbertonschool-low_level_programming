#ifndef DOG_H
#define DOG_H

/**
 * struct dog_t - A new name for structure dog
 * @name: variable with the name of the dog
 * @age: variable with the age of the dog
 * @owner: variable with the name of the owner of the dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif /* DOG_H */
