#include "variadic_functions.h"
/**
 * print_strings - Prints strings followed by a new line.
 * @separator: a string to be printed as a separator
 * @n: num of intigers passed
 * @...: vatiable of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *str;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);
		if (str == NULL)
			printf("(nil)");
		else
		printf("%s", str);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
