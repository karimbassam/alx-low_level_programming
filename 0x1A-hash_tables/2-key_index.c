#include "hash_tables.h"

/**
 * key_index - Gives the index of a key.
 * @key: The key to get the index for.
 * @size: The size of the array of the hash table.
 *
 * Return: The index at which the key/value pair should be stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;
	
	/* Get the hash value using the hash_djb2 function */
	hash = hash_djb2(key);
	
	/* Return the index using the modulo of the hash and the size of the array */
	return (hash % size);
}
