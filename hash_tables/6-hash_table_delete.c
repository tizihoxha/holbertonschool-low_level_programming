#include "hash_tables.h"

/**
 * hash_table_delete - Function that deletes a hash table
 * @ht: hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *new;
	hash_node_t *temp;
	unsigned int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		new = ht->array[i];
		if (new != NULL && new->next == NULL)
		{
			free(new->key);
			free(new->value);
			free(new);
		}
		else if (new != NULL && new->next != NULL)
		{
			while (new != NULL)
			{
				temp = new->next;
				free(new->key);
				free(new->value);
				free(new);
				new = temp;
			}
			free(new);
		}
	}
	free(ht->array);
	free(ht);
}
