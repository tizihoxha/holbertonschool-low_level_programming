#include "main.h"
/**
 * print_triangle - Entry point
 * @size: int
 * Return: size is 0 or less, the function should print only a new line
*/
void print_triangle(int size)
{
	int row, col;

	if (size < 1)
	{
		_putchar('\n');
	}
	for (row = 1; row <= size ; row++)
	{
		for (col = 1; col <= size ; col++)
		{
			if (row <= size - col)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
