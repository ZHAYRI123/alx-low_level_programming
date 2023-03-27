#include "main.h"
/**
 *swap_int - a function swap two number
 *@a: input
 *@b: input
 *Return: n & b
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
