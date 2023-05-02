#include "lists.h"
/**
 * print_listint - function
 * @h: input
 * Return: size_t type
 */
size_t print_listint(const listint_t *h)
{
	size_t t = 0;

	while (h)
	{
		t++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (t);
}
