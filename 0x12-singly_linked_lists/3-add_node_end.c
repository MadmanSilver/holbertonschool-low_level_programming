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
	list_t *p = *head;

	if (p == NULL)
	{
		*head = malloc(sizeof(list_t));
		(*head)->str = strdup(str);
		while (str[count])
			count++;
		(*head)->len = count;
		(*head)->next = NULL;
		return (p);
	}

	while (p->next != NULL)
		p = p->next;

	p->next = malloc(sizeof(list_t));
	p = p->next;
	p->str = strdup(str);
	while (str[count])
		count++;
	p->len = count;
	p->next = NULL;
	return (p);
}
