#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _pow_recursion - function
 * @x: input
 * @y: input
 * Return: int
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
