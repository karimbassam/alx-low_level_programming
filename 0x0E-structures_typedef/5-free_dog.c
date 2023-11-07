#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees the memory allocated for a dog structure.
 * @d: A pointer to the dog structure to be freed.
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}

