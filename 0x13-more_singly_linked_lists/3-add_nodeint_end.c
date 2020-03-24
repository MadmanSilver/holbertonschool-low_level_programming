#include "lists.h"

/**
 * add_nodeint_end - adds a new node to the end of a list
 * @head: list to add to
 * @n: value of new node
 *
 * Return: address of new element, NULL if error
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *p;

	if (head == NULL)
		return (NULL);

	if (*head != NULL)
	{
		p = *head;

		while (p->next != NULL)
			p = p->next;

		p->next = malloc(sizeof(listint_t));
		p = p->next;
	}
	else
	{
		*head = malloc(sizeof(listint_t));
		p = *head;
	}

	if (p == NULL)
		return (NULL);

	p->n = n;
	p->next = NULL;

	return (p);
}
