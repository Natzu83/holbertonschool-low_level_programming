#include "hash_tables.h"
/**
 * key_index - Function that gives the key's index
 * @key: The key in the hash table
 * @size: Hash Table Size
 * Return: Key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	int key_indx = (hash_djb2(key) % size);

	return (key_indx);
}
