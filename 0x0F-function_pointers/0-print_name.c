#include "function_pointers.h"
/**
 * print_name - function
 * @f: function pointer
 * @name: char
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
	else
		return;
}
