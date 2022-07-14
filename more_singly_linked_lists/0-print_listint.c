#include "lists.h"

/**
 * print_listint - function that prints all the elements of a node
 * @h: head of the node
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes_number = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes_number++;
	}
	return (nodes_number);
}
