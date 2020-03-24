#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: list to add to
 * @idx: index to insert at
 * @n: value of new node
 *
 * Return: address of new node, NULL if error
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *p;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	p = *head;

	if (new == NULL)
		return (NULL);

	new->n = n;

	for (i = 0; p != NULL && i + 1 < idx; i++)
		p = p->next;

	if (p == NULL && i != 0)
	{
		free(new);
		return (NULL);
	}

	if (i == 0 )
	{
		*head = new;
		new->next = NULL;
	}
	else
	{
		new->next = p->next;
		p->next = new;
	}

	return (new);
}
