#include "lists.h"
/**
 * get_dnodeint_at_index - fct
 * @head: input
 * @index: input
 * Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *h = head;
	unsigned int m = 0;
	
	while (h && m != index)
	{
		m++;
		h = h->next;
	}
	if (h && m == index)
		return (h);
	else
		return (NULL);
}
