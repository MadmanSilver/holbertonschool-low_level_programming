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
	unsigned int i, count = 0;
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL || str == NULL)
		return (NULL);

	while (str[count])
		count++;

	new->str = malloc(sizeof(char) * (count + 1));

	if (new->str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		new->str[i] = str[i];
	}

	new->str[i] = '\0';
	new->len = count;
	new->next = *head;
	*head = new;

	return (new);
}
