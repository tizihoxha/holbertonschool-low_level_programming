#include "lists.h"
/**
 * get_nodeint_at_index - function that deletes the head node and returns the
 * head node data n
 * @head: head of the node
 * Return: i
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
