#include "hash_tables.h"
/**
 * hash_table_get - Retrieves a value associated with a key.
 * @ht: Hash table you want to look into
 * @key: The key you are looking for
 * Return: Value associated with the element
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL)
		return (NULL);
	if (key[0] == '\0' || key == NULL)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
