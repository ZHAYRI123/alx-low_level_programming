#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - function
 * op_sub - function
 * op_mul - function
 * op_div - function
 * op_mod - function
 * @a: input
 * @b: input
 * Return: value
 */
int op_add(int a, int b)
{
	int sum;

	sum = a + b;
	return (sum);
}
/**
 * op_sub - function
 * @a: input
 * @b: input
 * Return: value
 */
int op_sub(int a, int b)
{
	int sub;

	sub = a - b;
	return (sub);
}
/**
 * op_mul - function
 * @a: input
 * @b: input
 * Return: value
 */
int op_mul(int a, int b)
{
	int mul;

	mul = a * b;
	return (mul);
}
/**
 * op_div - function
 * @a: input
 * @b: input
 * Return: value
 */
int op_div(int a, int b)
{
	int div;

	div = a / b;
	return (div);
}
/**
 * op_mod - function
 * @a: input
 * @b: input
 * Return: value
 */
int op_mod(int a, int b)
{
	int mod;

	mod = a % b;
	return (mod);
}
