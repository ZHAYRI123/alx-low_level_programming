#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _print_rev_recursion - function
 * @s: input
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (s[0] != '\0')
	{
	_print_rev_recursion(s + 1);
	_putchar(*s);
	}
}
