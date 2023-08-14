#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes funtcion
 * @d: structure
 * @name: char
 * @age: int
 * @owner: char
 *
 * Return: no return.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	int i;

	if (d != NULL)
	{
		for (i = 0; name[i] != '\0'; i++)
			d->name[i] = name[i];
		d->name[i] = '\0';
		d->age = age;
		for (i = 0; owner[i] != '\0'; i++)
			d->owner[i] = owner[i];
		d->owner[i] = '\0';
	}
}
