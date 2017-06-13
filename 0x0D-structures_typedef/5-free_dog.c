#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - deallocate memory allocated for struct dog
 * @d: pointer to dog struct
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
