#include "lists.h"
/**
 * free_dlistint - fct
 * @head: input
 * Return: none
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *h;

	h = head;
	free(h);
}
