#ifndef DOG_STRUCT_H
#define DOG_STRUCT_H

/**
 * struct dog - struct of dog
 * @name: variable of type char
 * @age: variable of type float
 * @owner: owner's name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_STRUCT_H */
