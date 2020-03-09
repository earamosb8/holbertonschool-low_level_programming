#include <stdio.h>
#include "dog.h"
/**
 * print_dog - print parameters.
 * @d: struc dog
 */
void print_dog(struct dog *d)
{
	if (d)
	{
	if (!d->name)
	{
		printf("Name: (nil)\n");
	}
	if (!d->owner)
	{
		printf("Owner: (nil)\n");
	}
	}
	printf("Name: %s\n", d->name);
	printf("Name: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
