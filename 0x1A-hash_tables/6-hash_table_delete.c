#include "hash_tables.h"

/**
 * hash_table_delete - a function that delete a hash table
 * @ht: the hash table
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current, *prev;
	unsigned long int i = 0;

	if (!ht || !ht->array || !ht->size)
		return;
	while (i < ht->size)
	{
		current = ht->array[i];
		while (current)
		{
			prev = current;
			current = current->next;
			free(prev->key);
			free(prev->value);
			free(prev);
		}
		i++;
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
