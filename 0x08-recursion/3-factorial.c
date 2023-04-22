#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * factorial - function
 * @n: input
 * Return: int
 */
int factorial(int n)
{
	int fact;

	fact = 1;
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (fact);
	fact = n * factorial(n - 1);
	return (fact);
}
