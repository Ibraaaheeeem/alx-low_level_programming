#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - this function
 * initializes a dog structure
 *
 * @d: dog structure.
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: Nothing
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
