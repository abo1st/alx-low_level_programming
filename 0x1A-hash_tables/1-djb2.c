#include "hash_tables.h"

/**
 * hash_djb2 - The ash function implementing the djb2 algorithm.
 * @str: This is the string to hash.
 * Return: Gives the  calculated hash.
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hashz;
	int czz;

	hashz = 5381;
	while ((czz = *str++))
		hashz = ((hashz << 5) + hashz) + czz;

	return (hashz);
}
