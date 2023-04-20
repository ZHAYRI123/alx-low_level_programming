#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_numbers - function
 * @separator: input
 * @n: input
 *Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list l;

	va_start(l, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(l, int));
		if (i != n - 1)
			printf("%s", separator);
	}
	va_end(l);
}
