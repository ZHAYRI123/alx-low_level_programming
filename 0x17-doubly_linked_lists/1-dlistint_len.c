#include "lists.h"
/**
 * dlistint_len - fct returns the number of elements in a linked list
 * @h: input
 * return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *x = h;
	size_t m = 0;

	while (x)
	{
		m++;
		x = x->next;
	}
	return (m);
}
