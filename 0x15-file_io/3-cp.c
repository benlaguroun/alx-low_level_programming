#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * alloc_buffer - Reserves a memory space of 1024 bytes for a buffer.
 * @file: The identifier of the file associated with the buffer's character storage.
 *
 * Returns: A pointer pointing to the newly allocated buffer space.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}


/**
 * shutdown_file - Terminates the file descriptor.
 * @fd: The file descriptor to gracefully close.
 */
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}


/**
 * file_copy - Duplicates the contents from one file into another.
 * @argc: The count of arguments passed to the program.
 * @argv: An array of pointers to the command-line arguments.
 *
 * Returns: 0 upon successful completion.
 *
 * Explanation: Exits with code 97 if arguments are incorrect.
 * Exits with code 98 if source file doesn't exist or is unreadable.
 * Exits with code 99 if destination file can't be created or written to.
 * Exits with code 100 if there's an issue closing source or destination files.
 */
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(to, buffer, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}

