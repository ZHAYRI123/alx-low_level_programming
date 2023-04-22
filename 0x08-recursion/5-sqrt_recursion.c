#include "main.h"
#include <stdio.h>
#include <stdlib.h>
int actual(int n, int i);
/**
 * _sqrt_recursion - function
 * @n: input
 * Return: input
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual(n, 0));
}
/**
 * actual - function
 * @n: input
 * @i: input
 *Return: int
 */
int actual(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (actual(n, i + 1));
}
