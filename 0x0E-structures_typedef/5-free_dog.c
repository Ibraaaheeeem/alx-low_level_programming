#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - this function deletes
 * god struct from memory
 * @d: dog struct
 *
 * Return: nothing
 */

void free_dog(dog_t *d)
{

	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
