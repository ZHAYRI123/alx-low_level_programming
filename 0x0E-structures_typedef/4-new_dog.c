#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *new_dog - functio
 *@name: input
 *@age: input
 *@owner: input
 *Return: struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	new->name = name;
	new->age = age;
	new->owner = owner;
	return (new);
}
