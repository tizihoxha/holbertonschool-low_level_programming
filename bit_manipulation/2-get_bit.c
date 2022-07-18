#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: unsigned long int
 * @index: unsigned int
 * Return: value of the bit at index or -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0 && index < 64)
		return (0);
	i = 0;
	while (i <= 63)
	{
		if (index == i)
		{
			return (n & 1);
		}
		n >>= 1, i++;
	}
	return (-1);
}
