#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: list to free
 */
void free_listint(listint_t *head)
{
	size_t i, count = 0;
	listint_t *p = head;
	listint_t **a;

	if (p == NULL)
		return;

	while (p != NULL)
	{
		count++;
		p = p->next;
	}

	a = malloc(sizeof(listint_t *) * count);
	p = head;

	if (a == NULL)
		return;

	for (i = 0; i < count; i++)
	{
		a[i] = p;
		p = p->next;
	}

	for (i = 0; i < count; i++)
		free(a[i]);

	free(a);
}
