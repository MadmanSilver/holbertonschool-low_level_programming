#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to update
 * @key: key to value
 * @value: value associated with key
 *
 * Return: 1 if success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((unsigned char *)key, ht->size);
	hash_node_t *p = ht->array[index];
	char *str = strdup(value);

	if (str == NULL)
		return (0);
	while (p != NULL)
	{
		if (strcmp(p->key, key) == 0)
		{
			free(p->value);
			p->value = str;
			return (1);
		}
		p = p->next;
	}
	p = malloc(sizeof(hash_node_t));
	if (p == NULL)
	{
		free(str);
		return (0);
	}
	p->key = strdup(key);
	if (p->key == NULL)
	{
		free(str);
		free(p);
		return (0);
	}
	p->value = str;
	p->next = ht->array[index];
	ht->array[index] = p;
	return (1);
}
