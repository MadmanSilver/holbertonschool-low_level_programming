#include "lists.h"

/**
 * dlistint_len - returns the length of a dlistint
 * @h: head of dlistint to count
 *
 * Return: result
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 1;
	dlistint_t *p;

	if (h == NULL)
		return (0);

	p = h->next;
	while (p != NULL)
	{
		count++;
		p = p->next;
	}

	return (count);
}
