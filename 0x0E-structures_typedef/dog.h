#ifndef DOG_H
#define DOG_H
/**
 *struct dog - struct
 *@age: input
 *@name: input
 *@owner: input
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif