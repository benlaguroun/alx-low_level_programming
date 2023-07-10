#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Reads text from a file and prints it.
 * @filename: name of file to read
 * @letters: number of letters to be read
 * Return: number bytes read/printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *buffer;
	ssize_t read_bytes, written_bytes;

	if (filename == NULL)
		return (0);

	file = fopen(filename, "r");
	if (file == NULL)
		return (0);

	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	read_bytes = fread(buffer, sizeof(char), letters, file);
	buffer[read_bytes] = '\0';

	written_bytes = fwrite(buffer, sizeof(char), read_bytes, stdout);

	free(buffer);
	fclose(file);

	return written_bytes;
}
