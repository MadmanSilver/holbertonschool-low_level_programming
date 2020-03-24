#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning
 * @head: list to add to
 * @n: value of node
 *
 * Return: address of new element, NULL if error
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (new == NULL || head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
