#include <stdio.h>

/**
 * main - this is main function
 *
 * Return: 0 when successfull
 */

int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu\n bytes(s)", sizeof(int));
	printf("Size of long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %lu byte(s)", sizeof(float));
	return (0);
}
