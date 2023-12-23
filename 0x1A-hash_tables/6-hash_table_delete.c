#include "hash_tables.h"

/**
 * hash_table_delete - This deletes a hash table.
 * @ht: This is a  pointer to a hash table.
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *node, *tmp;
	unsigned long int iz;

	for (iz = 0; iz < ht->size; iz++)
	{
		if (ht->array[iz] != NULL)
		{
			node = ht->array[iz];
			while (node != NULL)
			{
				tmp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = tmp;
			}
		}
	}
	free(head->array);
	free(head);
}
