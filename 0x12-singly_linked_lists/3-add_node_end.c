#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list
 * @head: pointer to first item
 * @str: string to duplicate
 *
 * Return: address of new element, NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int count = 0;
	list_t *new = malloc(sizeof(list_t));
	list_t *p;

	if (head == NULL || new == NULL)
		return (NULL);

	p = *head;

	while (str[count])
		count++;

	new->str = strdup(str);
	new->len = count;
	new->next = NULL;

	if (p == NULL)
		*head = new;
	else
	{
		while (p->next != NULL)
			p = p->next;

		p->next = new;
	}

	return (p);
}
