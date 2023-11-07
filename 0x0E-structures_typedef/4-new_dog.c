#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog and stores copies of name and owner.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 * Return: A pointer to the newly created dog, or NULL if it fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr = (dog_t *)malloc(sizeof(dog_t));

	new_dog_ptr->name = (char *)malloc(strlen(name) + 1);
	new_dog_ptr->age = age;
	new_dog_ptr->owner = (char *)malloc(strlen(owner) + 1);

	if (name == NULL || owner == NULL)
		return (NULL);

	if (new_dog_ptr == NULL)
		return (NULL);

	if (new_dog_ptr->name == NULL)
	{
		free(new_dog_ptr);
		return (NULL);
	}

	if (new_dog_ptr->owner == NULL)
	{
		free(new_dog_ptr->name);
		free(new_dog_ptr);
		return (NULL);
	}

	strcpy(new_dog_ptr->name, name);
	new_dog_ptr->age = age;
	strcpy(new_dog_ptr->owner, owner);

	return (new_dog_ptr);
}
