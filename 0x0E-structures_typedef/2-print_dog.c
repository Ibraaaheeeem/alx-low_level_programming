#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a dog attributes
 * @d: dog struct variable
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name)
		printf("Name: %s\n", d->name);
	else
		printf("(nil)");
	if (d->name)
		printf("Age: %f\n", d->age);
	else
		printf("%d", 0);
	if (d->owner)
		printf("Owner: %s\n", d->owner);
	else
		printf("(nil)");
}
