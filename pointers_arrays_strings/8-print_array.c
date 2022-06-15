#include "main.h"
#include <stdio.h>
/**
 * print_array - Entry point
 * @a: pointer
 * @n: int, number of elements to be printed in an array
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
		i++;
	}
	printf("\n");
}

