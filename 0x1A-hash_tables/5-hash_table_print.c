#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	int f = 0;
	unsigned long int i;
	hash_node_t *p;

	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL && f)
			printf(", ");
		p = ht->array[i];
		while (p != NULL)
		{
			f = 1;
			printf("'%s': '%s'", p->key, p->value);
			if (p->next != NULL)
				printf(", ");
			p = p->next;
		}
	}
	puts("}");
}
