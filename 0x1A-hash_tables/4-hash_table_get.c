#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table to search in
 * @key: key to look for
 *
 * Return: value associated with key, NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *p = ht->array[key_index((unsigned char *)key, ht->size)];

	while (p != NULL)
	{
		if (strcmp(p->key, key) == 0)
			return (p->value);
		p = p->next;
	}

	return (NULL);
}
