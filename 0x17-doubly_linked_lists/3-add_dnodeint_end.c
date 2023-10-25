#include "lists.h"
/**
 * add_dnodeint_end - fct add node to the end
 * @head: input
 * @n: input
 * Return: return alist
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h, *t = *head;

	h = malloc(sizeof(dlistint_t));
	if (h == NULL)
		return (NULL);
	h->n = n;
	h->next = NULL;
	if (t)
	{
		while (t->next)
			t = t->next;
		h->prev = t;
		t->next = h;
	}
	else
	{
		*head = h;
		h->next = NULL;		
	}
	return (h);
}
