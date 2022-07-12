#include "lists.h"
/**
 * add_node_end - function that adds a new node at the beginning of list_t
 * @str: duplicated string
 * @head: beginning of singly linked list
 * Return: *head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	size_t i = 0;
	list_t *node, *tmp;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	while (str[i])
	{
		i++;
	}
	node->len = i;
	node->next = NULL;
	tmp = *head;
	if (tmp == NULL)
	{
		*head = node;
	}
	else
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = node;
	}
	return (*head);
}
