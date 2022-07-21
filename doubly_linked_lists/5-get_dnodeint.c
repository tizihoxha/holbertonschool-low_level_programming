#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a dlist
 * @head: pointer to node head
 * @index: int of the n node
 * Return: the new added node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		index--;
	}
	return (head);
}
