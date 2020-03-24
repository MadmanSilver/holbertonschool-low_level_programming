#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a given index
 * @head: list to delete from
 * @index: spot to delete
 *
 * Return: 1 if success, -1 if failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *r;
	listint_t *p;

	if (head == NULL)
		return (-1);

	p = *head;

	if (index == 0 && *head != NULL)
	{
		*head = p->next;
		free(p);
		return (1);
	}

	for (i = 0; p != NULL && i < index - 1; i++)
		p = p->next;

	if (p == NULL)
		return (-1);

	r = p->next;
	p->next = p->next->next;
	free(r);

	return (1);
}
