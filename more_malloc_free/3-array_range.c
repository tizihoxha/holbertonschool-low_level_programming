#include "main.h"
/**
 * array_range - Entry point
 * @min: int
 * @max: int
 * Return: array
 */
int *array_range(int min, int max)
{
	int *array;
	int i;
	int length;

	length = (max - min) + 1;
	if (min > max)
		return (NULL);
	array = malloc(sizeof(*array) * length);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < length; i++)
	{
		array[i] = min++;
	}
	return (array);
}
