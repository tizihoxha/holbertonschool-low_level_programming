#include "lists.h"
/**
 * add_nodeint - function that adds a new node to the linked list
 * @head: head of the single linked list
 * n: number of elements
 * Return: new_node also set as head node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (head == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
