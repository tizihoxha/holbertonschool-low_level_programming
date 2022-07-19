#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would
 * need to flip to get from one number to another
 * @n: unsigned long int
 * @m: unsigned long int
 * Return: nr of fliped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bit_number = 0;

	while (n || m)
	{
		if ((n & 1) != (m & 1))
			bit_number++;
		 n >>= 1, m >>= 1;
	}
	return (bit_number);
}
