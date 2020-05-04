#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of list
 * @idx: index to insert at
 * @n: value of node to insert
 *
 * Return: pointer to new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i, count;
	dlistint_t *new, *p, *p2 = NULL;

	if (h == NULL)
		return (NULL);

	p = *h;

	for (count = 0; p != NULL; count++)
		p = p->next;

	if (idx > count)
		return (NULL);

	p = *h;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	for (i = 0; i < idx; i++)
	{
		p2 = p;
		p = p->next;
	}

	new->next = p;
	new->prev = p2;
	if (p2 != NULL)
		p2->next = new;
	if (p != NULL)
		p->prev = new;
	if (i == 0)
		*h = new;

	return (new);
}
