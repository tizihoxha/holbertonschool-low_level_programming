#include "lists.h"
/**
 * free_listint - function that frees the singly linked list
 * @head: head of the node
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
