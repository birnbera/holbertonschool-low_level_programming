#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize struct dog `d' with `name', `age', and `owner'
 * @d: pointer to struct dog type
 * @name: name to initialize `d' to
 * @age: age to initialize `d' to
 * @owner: owner to initialize `d' to
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
