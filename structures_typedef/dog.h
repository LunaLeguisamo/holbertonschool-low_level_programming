#ifndef dogh
#define dogh

/**
 * struct dog - struct represents a basic structure
 * for storing information about a dog
 * @name: variable with the name of the dog
 * @age: Variable with the age of the dog
 * @owner: Variable with the name of the owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
