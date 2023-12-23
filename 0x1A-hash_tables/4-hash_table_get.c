#include "hash_tables.h"

/**
 * hash_table_get - This retrieves the value associated with
 *                  a key in a hash table.
 * @ht: This is a pointer to the hash table.
 * @key: This is the key to get the value of.
 * Return: If the key cannot be matched - NULL.
 *         Otherwise - the value associated with key in ht.
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int indexz;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	indexz = key_index((const unsigned char *)key, ht->size);
	if (indexz >= ht->size)
		return (NULL);

	node = ht->array[indexz];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
