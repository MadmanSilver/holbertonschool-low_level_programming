#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: list to free
 */
void free_listint2(listint_t **head)
{
	size_t i, count = 0;
	listint_t *p;
	listint_t **a;

	if (head == NULL || *head == NULL)
		return;

	p = *head;

	while (p != NULL)
	{
		count++;
		p = p->next;
	}

	a = malloc(sizeof(listint_t *) * count);
	p = *head;

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
	*head = NULL;
}
