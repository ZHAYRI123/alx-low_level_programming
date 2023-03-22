#include "main.h"

/**
 *print_alphabet - print alphabet
 *loop to print letter 10
 * Return : 0
 */

void print_alphabet(void)
{
char lettre;
int i;
for (i = 1 ; i <= 10 ; i++)
	{
	for (letter = 'a' ; letter <= 'z' ; letter++)
		_putchar(letter);
	}
	_putchar(\n);
}
