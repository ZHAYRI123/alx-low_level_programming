#include "main.h"
#include <stdlib.h>
/**
 *_strdup - function that returns pointer to a newly allocated space in memory
 *@str: input
 *Return: pointer
 */
char *_strdup(char *str)
{
	char *strup;
	int l, i;

	l = 0;
	if (str == NULL)
		return (NULL);
	while (str[l])
		l++;
	strup = malloc(sizeof(char) * (l + 1));
	if (strup == NULL)
		return (NULL);
	for (i = 0; i <= l; i++)
		strup[i] = str[i];
	return (strup);

}
