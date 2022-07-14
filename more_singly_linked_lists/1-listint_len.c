#include "lists.h"
/**
 * listint_len - function that lists the number of elements
 * in a sngly linked list
 * @h: head of the node
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes_number = 0;

	while (h)
	{
		h = h->next;
		nodes_number++;
	}
	return (nodes_number);
}
