#include "lists.h"

/**
 * free_listint_safe - frees all the elements of a listint_t list
 * @head: list to be freed
 *
 * Return: number of nodes
 */
size_t free_listint_safe(listint_t **h)
{
	size_t i, j;
	listint_t *n;
	listint_t *p;
	listint_t **a;

	if (h == NULL)
		exit(98);

	a = malloc(sizeof(listint_t *) * 1024);
	p = *h;

	for (i = 0; p != NULL; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (p == a[j])
				break;
		}

		if (j != i)
			break;

		a[i] = p;
		n = p->next;
		free(p);
		p = n;
	}

	*h = NULL;
	free(a);

	return (i);
}
