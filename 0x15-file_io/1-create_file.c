#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 *
 * Return: if the function fails -1. Otherwise 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int nletters;
	int w;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	w = write(fd, text_content, nletters);

	if (w == -1)
		return (-1);

	close(fd);

	return (1);
}

