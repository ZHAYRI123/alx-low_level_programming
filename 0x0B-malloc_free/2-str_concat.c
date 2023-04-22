#include "main.h"
#include <stdlib.h>
/**
 *str_concat -  a function that concatenates two strings
 *@s1: input
 *@s2: input
 *Return: char
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int i, j, l1, l2;

	l1 = 0;
	l2 = 0;
	i = 0;
	j = 0;
	while (s1 != NULL)
		l1++;
	while (s2 != NULL)
		l2++;
	str = malloc(sizeof(char *) * (l1 + l2 + 1));
	if (str == NULL)
		return (NULL);
	if (s1)
	{
		while (i < l1)
		{
			str[i] = s1[i];
			i++;
		}
	}
	if (s2)
	{
		while (i < (l1 + l2))
		{
			str[i] = s2[j];
			i++;
			j++;
		}
	}
	str[i] = '\0';
	return (str);
}
