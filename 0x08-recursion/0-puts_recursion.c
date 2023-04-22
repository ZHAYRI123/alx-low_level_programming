#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _puts_recursion - function
 * @s: input
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		printf("\n");
		return;
	}
	printf("%c", *s);
	_puts_recursion(++s);
}
