#include "hash_tables.h"

/**
 * hash_table_get - Function that retrieves a value associated with a key
 * @ht: hash table
 * @key: key element
 * Return: null
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int i;

	if (ht == NULL || key == NULL)
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[i];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}


