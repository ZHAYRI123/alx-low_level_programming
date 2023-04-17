#include "dog.h"
/**
 *init_dog - function
 *@d: struct
 *@age: input
 *@name: input
 *@owner: input
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->age = age;
	d->name = name;
	d->owner = owner;
}
