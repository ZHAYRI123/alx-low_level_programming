#include "lists.h"
/**
 * add_dnodeint - fct add a node
 * @n: input
 * @head: input
 * Return: list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *h;

	h = malloc(sizeof(dlistint_t));
	if (h == NULL)
		return (NULL);
	h->n = n;
	h->prev = NULL;
	h->next = *head;
	if (*head)
		*head->prev =new;
	*head = new;
	return (new);
}
