#include "hash_tables.h"

/**
 * hash_table_print - a function that print a hash table
 * @ht: the hash table
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = -1, first = 0;
	hash_node_t *current;

	if (!ht || !ht->size || !ht->array)
		return;
	while (++i < ht->size)
	{
		current = ht->array[i];
		if (current && !first)
		{
			printf("{\'%s\': \'%s\'", current->key, current->value);
			first = 1;
			continue;
		}
		if (current)
			printf(", \'%s\': \'%s\'", current->key, current->value);
		if (i == ht->size - 1 && first)
			printf("}\n");
	}
}
