#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a specified index
 * @head: head of list to delete from
 * @index: index to delete
 *
 * Return: 1 if success, -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *p;

	if (head == NULL)
		return (-1);

	p = *head;

	for (i = 0; i < index && p != NULL; i++)
		p = p->next;

	if (p == NULL)
		return (-1);

	if (p->prev != NULL)
		p->prev->next = p->next;
	else
		*head = p->next;

	if (p->next != NULL)
		p->next->prev = p->prev;

	free(p);

	return (1);
}
