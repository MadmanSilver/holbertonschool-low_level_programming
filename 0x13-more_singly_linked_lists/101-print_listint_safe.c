#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - prints all the elements of a listint_t list
 * @head: list to be printed
 *
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i, j;
	listint_t *p;
	listint_t **a;

	if (head == NULL || head->next == NULL)
		exit(98);

	a = malloc(sizeof(listint_t *) * 2024);
	p = head->next;

	if (a == NULL)
		exit(98);

	printf("[%p] %d\n", (void *)head, head->n);
	for (i = 0; p != NULL; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (p == a[j] || p == head)
			{
				printf("-> [%p] %d\n", (void *)p, p->n);
				break;
			}
		}

		if (j != i)
			break;

		printf("[%p] %d\n", (void *)p, p->n);
		a[i] = p;
		p = p->next;
	}

	free(a);

	return (i);
}
