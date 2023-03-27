#include "main.h"
#include <stdio.h>
/**
 *puts_half -  a function that prints half of a string
 *@str: input
 *Return: void
 */
void puts_half(char *str)
{
int i = 0, j = 0;

while (str[j] != '\0')
	j++;
for (i = j / 2; i >= j; i++)
{
	_putchar(str[i]);
}
_putchar('\n');
}
