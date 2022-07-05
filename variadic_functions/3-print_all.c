#include "variadic_functions.h"

/**
 * print_char - prints single characters
 * @arg: arguments
 */

void print_char(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);
	printf("%c", letter);
}
/**
 * print_int - prints numbers
 * @arg: arguments
 */

void print_int(va_list arg)
{
	int n;

	n = va_arg(arg, int);
	printf("%d", n);
}

/**
 * print_float - floating point numbers
 * @arg: arguments
 */

void print_float(va_list arg)
{
	float fl;

	fl = va_arg(arg, double);
	printf("%f", fl);
}

/**
 * print_string - prints strings
 * @arg: srguments
 */

void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
/**
 * print_all - function that prints all elements
 * @format: string
 * @...: variable of elements to print
 */
void print_all(const char * const format, ...)
{
	va_list arg;

	var_t functions[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
	};
	int i, j;
	char *sep;

	i = 0;
	sep = "";

	va_start(arg, format);
	while (format && format[i] != '\0')
	{
		j = 0;
		while (j < 4 && (*(format + i) != *(functions[j].c)))
		{
			j++;
		}
		if (j < 4)
		{
			printf("%s", sep);
			functions[j].tpr(arg);
			sep = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(arg);
}
