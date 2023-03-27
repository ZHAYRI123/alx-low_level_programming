#include "main.h"
#include <stdio.h>
/**
 *rev_string -  a function that reverses a string.
 *@s: input
 *Return: rien
 */
void rev_string(char *s)
{
	int l = 0, index = 0;
	char temp;

	while (s[index++])
		l++;
	for (index = l - 1; index >= l / 2; index--)
	{
		temp = s[index];
		s[index] = s[l - index - 1];
		s[l - index - 1] = temp;
	}
}
