#include "variadic_functions.h"
/**
 * print_numbers - Prints numbers followed by a new line.
 * @separator: a string to be printed as a separator
 * @n: num of intigers passed
 * @...: vatiable of nums to print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		int arg = va_arg(numbers, unsigned int);

		printf("%d", arg);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(numbers);
}
