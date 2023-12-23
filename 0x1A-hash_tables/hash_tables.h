#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct hash_node_s -This is the  Node of a hash table.
 * @key: This is the key, string.
 * @value: This is the value corresponding to a key.
 * @next: This is the  pointer to the next node of the List.
 */

typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - The hash table data structure.
 * @size: This is the size of the array.
 * @array: This is an array of size @size.
 */

typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);

/**
 * struct shash_node_s - This is the node of a sorted hash table.
 * @key: The key, string.
 * @value: The value corresponding to a key.
 * @next: This is a  pointer to the next node of the List.
 * @sprev: It is a  pointer to the previous element of the sorted linked list.
 * @snext: This is a pointer to the next element of the sorted linked list.
 */

typedef struct shash_node_s
{
	char *key;
	char *value;
	struct shash_node_s *next;
	struct shash_node_s *sprev;
	struct shash_node_s *snext;
} shash_node_t;

/**
 * struct shash_table_s - Sorted hash table data structure.
 * @size: This is the size of the array.
* @array: This is an array of size @size.
 * @shead: This is a pointer to the first element of the sorted linked list.
 * @stail:It is a pointer to the last element of the sorted linked list.
 */


typedef struct shash_table_s
{
	unsigned long int size;
	shash_node_t **array;
	shash_node_t *shead;
	shash_node_t *stail;
} shash_table_t;

shash_table_t *shash_table_create(unsigned long int size);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);

#endif
