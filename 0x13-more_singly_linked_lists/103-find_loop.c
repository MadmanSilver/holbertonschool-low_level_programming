#include "lists.h"

/**
 * find_listint_loop - finds a loop in a listint_t list
 * @head: list to be checked
 *
 * Return: address of start of loop, NULL if there is none
 */
listint_t *find_listint_loop(listint_t *head)
{
	size_t i, j;
	listint_t *p = head, *p2 = head;

	if (head == NULL)
		return (NULL);

	for (i = 0; p != NULL; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (p2 == p)
				break;

			p2 = p2->next;
		}

		if (j != i)
			return (p);

		p = p->next;
		p2 = head;
	}

	return (NULL);
}
