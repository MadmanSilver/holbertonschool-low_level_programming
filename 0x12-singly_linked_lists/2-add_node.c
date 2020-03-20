#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 * @head: pointer to beginning of the list
 * @str: new string to add to list
 *
 * Return: address of the new element, NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int count = 0;
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL || str == NULL)
		return (NULL);

	while (str[count])
		count++;

	new->str = strdup(str);
	new->len = count;
	new->next = *head;
	*head = new;

	return (new);
}
