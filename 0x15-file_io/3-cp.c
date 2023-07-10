#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */

void close_file(int fd);

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        fprintf(stderr, "Usage: cp file_from file_to\n");
        exit(97);
    }

    int from = open(argv[1], O_RDONLY);
    if (from == -1)
    {
        fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }

    int to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
    if (to == -1)
    {
        fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
        exit(99);
    }

    char buffer[1024];
    ssize_t bytes_read, bytes_written;

    while ((bytes_read = read(from, buffer, sizeof(buffer))) > 0)
    {
        bytes_written = write(to, buffer, bytes_read);
        if (bytes_written == -1)
        {
            fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
            exit(99);
        }
    }

    if (bytes_read == -1)
    {
        fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }

    close_file(from);
    close_file(to);

    return 0;
}

void close_file(int fd)
{
    if (close(fd) == -1)
    {
        fprintf(stderr, "Error: Can't close fd %d\n", fd);
        exit(100);
    }
}
