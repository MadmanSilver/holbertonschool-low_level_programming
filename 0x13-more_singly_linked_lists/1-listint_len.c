#include "lists.h"

/**
 * listint_len - returns the length of a listint list
 * @h: list to count
 *
 * Return: count
 */
size_t listint_len(const listint_t *h)
{
	size_t i;
	listint_t *p;

	if (h == NULL)
		return (0);

	p = h->next;

	for (i = 1; p != NULL; i++)
		p = p->next;

	return (i);
}
