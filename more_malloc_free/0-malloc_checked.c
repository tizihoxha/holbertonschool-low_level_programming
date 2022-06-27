#include "main.h"
/**
 * malloc_checked - Entry point
 * @b: unsigned int
 * Return: ptr
 * exit: 98
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
