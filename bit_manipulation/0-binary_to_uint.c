#include "main.h"

/**
 * binary_to_uint -  function that converts a binary number to an unsigned int
 * @b: a string containing chharacters of type 0 & 1
 * Return: the unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int nr = 0, power = 1;
	int i;

	if (b == NULL)

		return (0);
	i = 0;
	while (b[i])
		i++;
	i = i - 1;
	while (i >= 0)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		nr = nr + (b[i] - '0') * power;
		power = power * 2;
		i--;
	}
	return (nr);
}
