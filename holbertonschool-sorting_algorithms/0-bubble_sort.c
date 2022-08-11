#include "sort.h"

/**
 * bubble_sort - function to sort an array using the bubble sort alg
 * @array: array of elements
 * @size: size of the array
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, n;
	int temp, swap;

	n = size;
	for (swap = 1; n > 0 && swap; n--)
	{
		swap = 0;
		i = 0;
		while ((i + 1) < n)
		{
			if (array[i] > array[i+1])
			{
				temp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = temp;
				print_array(array, size);
				swap = 1;
			}
			i++;
		}
	}
}
