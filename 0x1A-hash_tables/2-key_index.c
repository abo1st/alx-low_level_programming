#include "hash_tables.h"

/**
 * key_index - This gets the index at which a key/value
 *      pair should be stored in array of a hash table.
 * @key: This is the key to get the index of.
 * @size: This is the size of the array of the hash table.
 * Return: This is the index of the key.
 * Description: It uses the djb2 algorithm.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
