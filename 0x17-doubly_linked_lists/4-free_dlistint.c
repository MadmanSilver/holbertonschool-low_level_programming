#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: head of list to free
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	while (head->prev != NULL)
		head = head->prev;
	head = head->next;
	while (head != NULL)
	{
		free(head->prev);
		if (head->next == NULL)
		{
			free(head);
			break;
		}
		head = head->next;
	}
}
