#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all the given parameters
 * @n: Number of parameters
 * @...: variable number of parameters
 * Return: 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i, sum;

	va_start(numbers, n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(numbers, int);
	va_end(numbers);
	return (sum);
}
