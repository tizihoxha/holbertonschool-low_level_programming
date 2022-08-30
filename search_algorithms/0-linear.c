#include "search_algos.h"

/**
 * linear_search - function that uses linear search algorithm
 * @array: pointer to the array of elements
 * @size: number of elements or size of the array
 * @value: value of the element we're searching
 * Return: -1 failure, element success
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL || size == 0)
		return (-1);
	i = 0;
	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
