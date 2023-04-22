#include "main.h"
#include <stdio.h>
#include <stdlib.h>
int actual(int n, int i);
/**
 * is_prime_number - function
 * @n: input
 * Return: 0,1
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual(n, n - 1));
}
/**
 * actual - function
 * @n: input
 * @i: input
 * Return: int
 */
int actual(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual(n, i - 1));
}
