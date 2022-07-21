#include "lists.h"

/**
 * dlistint_len - function to print the elements of all nodes
 * @h: pointer to node header
 * Return: all elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t all_nodes = 0;

	while (h)
	{
		h = h->next;
		all_nodes++;
	}
	return (all_nodes);
}
