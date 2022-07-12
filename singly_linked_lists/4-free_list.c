#include "lists.h"
/**
 * free_list - function that frees list_t
 * @head: beginning of singly linked list
 * Return: no return
 */
void free_list(list_t *head)
{
	list_t *firstnode;

	while ((firstnode = head))
	{
		head = head->next;
		free(firstnode->str);
		free(firstnode);
	}
}
