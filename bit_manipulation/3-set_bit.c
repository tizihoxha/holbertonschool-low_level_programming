#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: unsigned long int
 * @index: unsigned int
 * Return: 1 if successful -1 when error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;
	if (index > 63)
		return (-1);
	i = 1 << index;
	*n = (*n | i);
	return (1);
}
