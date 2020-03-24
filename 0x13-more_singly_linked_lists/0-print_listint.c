#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: list to be printed
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i;
	listint_t *p;

	if (h == NULL)
		return (0);

	p = h->next;

	printf("%d\n", h->n);
	for (i = 1; p != NULL; i++)
	{
		printf("%d\n", p->n);
		p = p->next;
	}

	return (i);
}
