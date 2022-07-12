#include "lists.h"
/**
 * add_node - function that adds a new node at the beginning of list_t
 * @str: duplicated string
 * @head: beginning of singly linked list
 * Return: *head
 */
list_t *add_node(list_t **head, const char *str)
{
	size_t i = 0;
	list_t *node;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	while (str[i])
	{
		i++;
	}
	node->len = i;
	node->next = *head;
	*head = node;
	return (*head);
}
