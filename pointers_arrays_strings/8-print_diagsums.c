#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: pointer
 * @size: size
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int row, col;
	int sum = 0;
	int res;

	row = 0;

	while (row < size)
	{
		sum = sum + a[row * (size + 1)];
		row++;
	}
	col = size - 1;
	res = 0;
	while (col < size * size - 1)
	{
		if (col == size * size)
			res = res + a[col - 1];
		else
			res = res + a[col];
		col = col + size - 1;
	}
	printf("%d, %d\n", sum, res);
}


