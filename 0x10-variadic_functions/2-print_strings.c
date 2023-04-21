#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_strings - function
 * @separator: char
 * @n: input
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list l;
	char *c;

	va_start(l, n);
	for (i = 0; i < n; i++)
	{
		c = va_arg(l, char *);
		if (c)
			printf("%s", c);
		else
			printf("(nil)");
		if (separator != NULL)
		if (i != n - 1)
		printf("%s", separator);
	}
}
