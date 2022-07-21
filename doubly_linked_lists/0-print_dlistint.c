#include "lists.h"

/**
 * print_dlistint - function to print the elements of all nodes
 * @h: pointer to node header
 * Return: all of the printed elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t all_nodes = 0;

	while (h)
	{
		printf("%i\n", (*h).n);
		h = h->next;
		all_nodes++;
	}
	return (all_nodes);
}
