#include "lists.h"

/**
 * reverse_listint - reverses a listint_t list
 * @head: list to reverse
 *
 * Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *next;

	if (head == NULL)
		return (NULL);

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}

	*head = previous;

	return (*head);
}
