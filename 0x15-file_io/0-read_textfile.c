#include "main.h"
/**
 * read_textfile - a function that reads a text file and prints it
 * @filename: input
 * @letters: inut
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t w, r;
	char *c;

	if (!filename)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	c = malloc(sizeof(char) * letters);
	if (!c)
		return (0);
	r = read(f, c, letters);
	w = write(STDOUT_FILENO, c, r);
	close(f);
	free(c);
	return (w);
}
