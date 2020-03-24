#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t
 * @head: list to search
 * @index: index to find
 *
 * Return: pointer to found node, NULL if error
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i;
	listint_t *p = head;

	for (i = 0; p != NULL; i++)
	{
		if (i == index)
			return (p);
		p = p->next;
	}

	return (p);
}
