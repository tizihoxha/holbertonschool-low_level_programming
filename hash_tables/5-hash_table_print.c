#include "hash_tables.h"

/**
 * hash_table_print - Function that prints a hash table
 * @ht: hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	char *separator;
	unsigned int elements;
	unsigned int i;

	if (ht == NULL || ht->array == NULL)
		return;

	i = 0;
	elements = 0;
	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
			elements++;
		i++;
	}

	if (elements > 0)
		printf("{");

	i = 0;
	separator = "";
	while (i < ht->size)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			printf("%s", separator);
			printf("'%s': '%s'", temp->key, temp->value);
			temp = temp->next;
			separator = ", ";
		}
		i++;
	}

	if (elements > 0)
		printf("}");
	printf("\n");
}

