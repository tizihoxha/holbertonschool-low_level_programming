#include <stdio.h>
/**
 * main -entry point
 *
 * Return: 0
 */
int main(void)
{
	int i;
	long int n1, n2;
	long int fib;
	long int sum;

	n1 = 1;
	n2 = 2;
	sum = 2;
	for (i = 3; i < 33; ++i)
	{
		fib = n1 + n2;
		n1 = n2;
		n2 = fib;
		if (fib % 2 == 0)
			sum = sum + fib;
	}
	printf("%ld", sum);
	printf("\n");
	return (0);
}
