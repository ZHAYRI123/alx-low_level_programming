#include "main.h"
/**
 *_strlen - a function that returns the length of a string
 *@s: input
 *Return: nothing
 */
size_t _strlen(const char *s)
{
	size_t l = 0;

	while (*s++)
		l++;
	return (l);
}
