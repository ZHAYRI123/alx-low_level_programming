#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array of integers
 * @size: searches for a value in a sorted array of integers
 * @value: the value to search for
 * @array:  a pointer to the first element of the array to search in
 * Return: the index of the value
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, mid, low = 0, high = size - 1;

	if (array == NULL)
		return (-1);
	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i != high)
			{
				printf(", ");
			}
		}
		printf("\n");
		mid = low + (high - low) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
