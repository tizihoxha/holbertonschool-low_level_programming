#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the node at
 * index index of a listint_t linked list
 * @head: head of the linked list
 * @index: index of node to be deleted
 * Return: 1 if succes, -1 if function fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *fr;
	unsigned int i = 0;

	fr = *head;
	if (fr == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(fr);
		return (1);
	}
	while (i < (index - 1))
	{
		if (fr->next == NULL)
			return (-1);
		fr = fr->next;
		i++;
	}
	tmp = fr->next;
	fr->next = tmp->next;
	free(tmp);
	return (1);
}
