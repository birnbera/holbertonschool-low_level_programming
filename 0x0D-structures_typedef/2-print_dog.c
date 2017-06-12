#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print out members of struct dog `d'
 * @d: struct to print
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	if (d->age)
		printf("Age: %f\n", d->age);
	else
		printf("Age: (nil)\n");
	printf("Owner: %s\n", d->name ? d->owner : "(nil)");
}
