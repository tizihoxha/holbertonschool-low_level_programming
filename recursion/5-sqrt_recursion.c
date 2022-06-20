#include "main.h"
/**
 * find_sqrt_ - entry point
 * @n: int 1
 * @i: int 2
 * Return: sqr
 */

int find_sqrt_(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i == n / 2 || i * i > n)
		return (-1);
	else
		return (find_sqrt_(n, i + 1));
}


/**
 * _sqrt_recursion - entry point
 * @n: int 1
 * Return: 1 if n = 1, -1 if n < 0 else sqrt
 */


int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	else
		return (find_sqrt_(n, 0));
}
