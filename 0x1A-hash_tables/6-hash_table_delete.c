#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *p, *p2;

	for (i = 0; i < ht->size; i++)
	{
		p = ht->array[i];
		while (p != NULL)
		{
			p2 = p->next;
			free(p->key);
			free(p->value);
			free(p);
			p = p2;
		}
	}

	free(ht->array);
	free(ht);
}
