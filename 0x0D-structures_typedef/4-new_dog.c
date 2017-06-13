#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - create and initialize `dog_t' type struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to `dog_t', or NULL if fails to allocate memory
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(dog_t));
	char *new_name, *new_owner;
	int i;

	if (dog == NULL)
		return (NULL);
/* copy `name' to `new_name' */
	for (i = 0; name[i]; ++i)
		;
	new_name = malloc(sizeof(char) * (i + 1));
	if (new_name == NULL)
	{
		free(dog);
		return (NULL);
	}
	while (i >= 0)
	{
		new_name[i] = name[i];
		--i;
	}
/* copy `owner' to `new_owner' */
	for (i = 0; owner[i]; ++i)
		;
	new_owner = malloc(sizeof(char) * (i + 1));
	if (new_owner == NULL)
	{
		free(new_name);
		free(dog);
		return (NULL);
	}
	while (i >= 0)
	{
		new_owner[i] = owner[i];
		--i;
	}
/* initialize `dog' */
	dog->name = new_name;
	dog->age = age;
	dog->owner = new_owner;
	return (dog);
}
