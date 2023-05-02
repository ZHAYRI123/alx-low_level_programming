#include "lists.h"
/**
 * listint_len - function
 * @h: input
 * Return:  the number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t t = 0;

	while (h)
	{
		t++;
		h = h->next;
	}
	return (t);
}
