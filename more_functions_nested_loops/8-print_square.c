#include "main.h"
/**
 * print_square - Entry point
 * @size: int
 * Return: size is 0 or less, the function should print only a new line
*/
void print_square(int size)
{
	int row, col;

	if (size <= 0)
		_putchar('\n');
	for (row = 0; row < size; row++)
	{
		for (col = 0; col < size; col++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
