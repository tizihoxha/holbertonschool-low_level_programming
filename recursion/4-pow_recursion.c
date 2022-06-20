#include "main.h"
/**
 * _pow_recursion - Entry point appends the src string to the dest string
 * @x: int
 * @y: int
 * Return: (n * factorial(n - 1))
 */
int _pow_recursion(int x, int y)
{

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
