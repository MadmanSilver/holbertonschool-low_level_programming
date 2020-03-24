#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * @head: list to pop from
 *
 * Return: data of popped node
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *p;

	if (head == NULL || *head == NULL)
		return (0);

	n = (*head)->n;
	p = *head;
	*head = p->next;
	free(p);

	return (n);
}
