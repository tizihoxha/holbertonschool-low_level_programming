#include "hash_tables.h"

/**
 * hash_table_set - function to add a element to the hash table
 * @key: key
 * @ht: hash table
 * @value: value 
 * Return 0 if failure, 1 in success
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *temp;
	unsigned long int i;

	if (ht == NULL || key == NULL)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);

	temp = ht->array[i];

	while (temp != NULL)
	{
		if(strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			if (temp->value == NULL)
				return (0);
			return (1);
		}
		temp = temp->next;
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	if (new->value == NULL)
		return (0);
	new->next = ht->array[i];
	ht->array[i] = new;
	return (1);
}
