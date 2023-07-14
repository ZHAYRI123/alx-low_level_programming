#include "main.h"
/**
 * create_file -  a function that creates a file
 * @filename: input
 * @text_content: input
 * Return: int value
 */
int create_file(const char *filename, char *text_content)
{
	int f, letters, w;

	if (!filename)
		return (-1);
	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (f == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (letters = 0; text_content[letters]; letters++)
		w = write(f, text_content, letters);
	if (w == -1)
		return (-1);
	close(f);
	return (1);
}
