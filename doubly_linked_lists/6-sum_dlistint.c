#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data (n) in dbls
 * @head: pointer to node head
 * Return: the sum of elements
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum = sum + (*head).n;
		head = head->next;
	}
	return (sum);
}
