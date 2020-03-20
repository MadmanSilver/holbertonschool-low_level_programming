#include "lists.h"
#include <limits.h>

/**
 * free_list - frees a list_t list
 * @head: pointer to start of list
 */
void free_list(list_t *head)
{
	int i = 0;
	list_t *p = head;
	list_t **a;

	if (head == NULL)
		return;

	for (i = 0; p != NULL; i++)
		p = p->next;

	p = head;
	a = malloc(sizeof(list_t *) * i);

	for (i = 0; p != NULL; i++)
	{
		a[i] = p;
		p = p->next;
	}

	while (i > 0)
	{
		free(a[i - 1]->str);
		free(a[i - 1]);
		i--;
	}

	free(a);
}
