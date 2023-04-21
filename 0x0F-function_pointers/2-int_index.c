#include "function_pointers.h"
/**
 * int_index - function
 * @array: input
 * @size: input
 * @cmp: pointer
 * @array: input
 *Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array == NULL)
		return (-1);
	if (cmp == NULL)
		return (0);
	for (i = 0; i < size; i++)
	{
		cmp(array[i]);
		return (i);
	}
	return (-1);
}
