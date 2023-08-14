#include "dog.h"

#include "dog.h"

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
	d->name = name;
	d.age = age;
	(*d).owner = owner;
}
