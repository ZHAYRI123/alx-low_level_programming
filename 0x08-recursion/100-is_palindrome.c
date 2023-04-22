#include "main.h"
#include <stdio.h>
#include <stdlib.h>
int check_pal(char *s, int i, int l);
int strlen_recursion(char *s);
/**
 * is_palindrome - function
 * @s: input
 * Return: int
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, strlen_recursion(s)));
}
/**
 * strlen_recursion - function
 * @s: input
 * Return: int
 */
int strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + strlen_recursion(s + 1));
}
/**
 * check_pal - function
 * @i: input
 * @l: input
 * @s: input
 * Return: int
 */
int check_pal(char *s, int i, int l)
{
	if (*(s + i) != *(s + l - 1))
		return (0);
	if (i >= l)
		return (1);
	return (check_pal(s, i + 1, l - 1));
}
