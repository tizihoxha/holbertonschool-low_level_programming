#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of a listint_t linked list
 * @head: head of the node
 * @index: unsigned int
 * Return: head
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int new_node = 0;

	while (new_node < index)
	{
		if (head == NULL)
			return (NULL);
		new_node++;
		head = head->next;
	}
	return (head);
}
