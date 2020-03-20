#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to list to count
 *
 * Return: number of elements in linked list
 */
size_t list_len(const list_t *h)
{
	size_t count = 1;
	list_t *p = h->next;

	if (h == NULL)
		return (0);

	while (p != NULL)
	{
		count++;
		p = p->next;
	}

	return (count);
}
