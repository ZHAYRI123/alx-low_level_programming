#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - a function that creates an array of chars
 *@size: input
 *@c: input
 *Return: array
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
		return (NULL);
	str = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
