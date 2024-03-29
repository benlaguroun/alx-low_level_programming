#include "main.h"
#include <stdlib.h>

/**
 * textfile_reader - Read and print a specified number of letters from a text file.
 * @filename: The name of the text file to be read.
 * @letters: The number of letters to be read and printed.
 * Return: The actual number of bytes read and printed, or 0 on failure or if filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}

