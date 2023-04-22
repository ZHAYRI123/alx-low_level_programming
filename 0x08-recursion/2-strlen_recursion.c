#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen_recursion - function
 * @s: input
 * Return: int
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
	return (0);
}
