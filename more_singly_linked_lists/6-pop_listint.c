#include "lists.h"
/**
 * pop_listint - function that deletes the head node and returns the
 * head node data n
 * @head: head of the node
 * Return: i
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int i;

	if (head == NULL)
		return (0);

	tmp = *head;
	i = (*head)->n;
	*head = (*head)->next;
	free(tmp);

	return (i);
}
