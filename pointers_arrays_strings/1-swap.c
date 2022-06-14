#include "main.h"

/**
 * swap_int - entry point, awaping values of a and b
 *
 * @a: int 1
 * @b: int 2
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}
