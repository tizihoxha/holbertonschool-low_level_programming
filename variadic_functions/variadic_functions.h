#ifndef _VARIADIC_FUNCTION_H
#define _VARIADIC_FUNCTION_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
/**
 * struct variadic - Entry point
 * @c: character
 * @tpr: function to print
 */
typedef struct variadic
{
	char *c;
	void (*tpr)(va_list arg);
} var_t;

#endif
