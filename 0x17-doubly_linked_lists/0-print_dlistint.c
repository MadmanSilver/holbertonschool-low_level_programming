#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint
 * @h: head of list to print
 *
 * Return: number of nodes printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 1;
	dlistint_t *p;

	if (h == NULL)
		return (0);

	p = h->next;
	printf("%d\n", h->n);

	while (p != NULL)
	{
		printf("%d\n", p->n);
		count++;
		p = p->next;
	}

	return (count);
}
