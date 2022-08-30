#include "search_algos.h"

/**
 *
 *
 *
 *
 *
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL || size == 0)
		return (-1);
	i = 0;
	while (i < size)
	{
		printf("VALUE checked array[%ld] = [%d]/n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
