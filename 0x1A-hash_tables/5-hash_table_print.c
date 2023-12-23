#include "hash_tables.h"

/**
 * hash_table_print - This prints a hash table.
 * @ht: It is a pointer to the hash table to print.
 * Description: The Key/value pairs are printed in the order
 *              they appear in the array of the hash table.
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int iz;
	unsigned char comma_flagz = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (iz = 0; iz < ht->size; iz++)
	{
		if (ht->array[iz] != NULL)
		{
			if (comma_flagz == 1)
				printf(", ");

			node = ht->array[iz];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			comma_flagz = 1;
		}
	}
	printf("}\n");
}
