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
	int fact, i;

	fact = 1;
	i = 2;
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (fact);
	while (i <= n)
	{
		fact = i * factorial(i - 1);
	}
	return (fact);
}
