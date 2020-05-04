#include "lists.h"

/**
 * sum_dlistint - sums all data in a dlistint_t
 * @head: head of list to sum
 *
 * Return: result
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
