#include "main.h"
/**
 * reverse_array - Entry point
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int rev = 0;
	int tmp;

	for (rev = n - 1; rev >= n / 2 ; rev--)
	{
		tmp = a[rev];
		a[rev] = a[n - rev - 1];
		a[n - rev - 1] = tmp;

	}
}
