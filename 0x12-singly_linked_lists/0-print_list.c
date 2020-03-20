#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 * @h: pointer to list to print
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count;
	list_t *p;

	if (h == NULL)
		return (0);

	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%u] %s\n", h->len, h->str);
	p = h->next;
	for (count = 1; p != NULL; count++)
	{
		if (p->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", p->len, p->str);
		p = p->next;
	}

	return (count);
}
