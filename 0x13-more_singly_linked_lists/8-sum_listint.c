#include "lists.h"

/**
 * sum_listint - sums all data of a listint_t
 * @head: list to sum
 *
 * Return: result, 0 if empty
 */
int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *p = head;

	while (p != NULL)
	{
		total += p->n;
		p = p->next;
	}

	return (total);
}
