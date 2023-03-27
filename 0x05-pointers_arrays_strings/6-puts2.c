#include "main.h"
#include <stdio.h>
/**
 *puts2 - a function that prints every other character of a string
 *@str: input
 *Return: void
 */
void puts2(char *str)
{
	int i;
	int j = 0;

	while (str[j] != '\n')
	{
		j++;
	}
	for (i = j; i > 0; i -= 1)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
