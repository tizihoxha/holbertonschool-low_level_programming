#include "main.h"
/**
 * _strlen_recursion - Entry point appends the src string to the dest string
 * @n: int
 * Return: (n * factorial(n - 1))
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
