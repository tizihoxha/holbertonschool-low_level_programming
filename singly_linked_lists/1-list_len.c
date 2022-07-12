#include "lists.h"
/**
 * list_len - function that returns the number of elements of list_t
 * @h: pointer to list_t
 * Return: i
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
