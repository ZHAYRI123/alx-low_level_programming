#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *free_dog - function
 *@d: input
 */
void free_dog(dog_t *d)
{
	free(d);
}
