#include "hash_tables.h"

/**
 * key_index - Compute the index at which a key/value pair should be stored
 *             in the array of a hash table using the djb2 algorithm.
 *
 * @key: The key to determine the index for.
 * @size: The size of the hash table's array.
 *
 * Return: The index where the key should be stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
