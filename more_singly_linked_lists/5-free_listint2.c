#include "lists.h"
/**
 * free_listint2 - function that frees the singly linked list
 * @head: head of the node
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	
	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	head = NULL;
}
