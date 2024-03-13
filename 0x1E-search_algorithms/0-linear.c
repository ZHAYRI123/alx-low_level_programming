#include "search_algos.h"
/**
*linear_search - linear_search function
*@array: a pointer to the first element of the array to search in
*@size: a pointer to the first element of the array to search in
*@value:  the value to search for
*Return: indexof the value or -1
*/
int linear_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	for (int i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]", &i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
