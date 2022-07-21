#include "lists.h"

/**
 * free_dlistint - function that frees a dbl
 * @head: pointer to node header
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
