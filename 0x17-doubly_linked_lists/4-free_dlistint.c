#include "lists.h"
/**
 * free_dlistint - fct
 * @head: input
 * Return: none
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *h;
	dlistint_t *m;
	
	if (head)
	{
		h = head;
		m = head->next;
		while (m)
		{
			free(h);
			h = m;
			m = m->next;
		}
		free(h);
	}
}
