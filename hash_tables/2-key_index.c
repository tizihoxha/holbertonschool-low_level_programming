#include "hash_tables.h"

/**
 * key_index - Function that gives the index of a key
 * @key: key
 * @size: the size of nodes
 * Return: key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
