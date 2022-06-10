#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	int i;
	long int n1, n2;
	long int fib;

	n1 = 1;
	n2 = 2;
	printf("%ld, %ld", n1, n2);
	for (i = 3; i < 51; ++i)
	{
		fib = n1 + n2;
		printf(", %ld", fib);
		n1 = n2;
		n2 = fib;
	}
	printf("\n");
	return (0);
}
