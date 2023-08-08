#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_buffer - Reserves a memory space of 1024 bytes for a buffer.
 * @file: The identifier of the file associated with the buffer's character storage.
 *
 * Returns: A pointer pointing to the newly allocated buffer space.
 */
char *alloc_buffer(const char *file) 
{
char *buffer = (char *)malloc(1024);
if (buffer == NULL) 
{
perror("Memory allocation error");
exit(EXIT_FAILURE);
}
return (buffer);
}

/**
 * shutdown_file - Terminates the file descriptor.
 * @fd: The file descriptor to gracefully close.
 */
void shutdown_file(int fd) 
{
if (close(fd) == -1) 
{
perror("Error closing file descriptor");
exit(EXIT_FAILURE);
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
int file_copy(int argc, char *argv[]) 
{
if (argc != 3) 
{
fprintf(stderr, "Usage: %s <source_file> <destination_file>\n", argv[0]);
exit(97);
}
const char *file_from = argv[1];
const char *file_to = argv[2];
FILE *src = fopen(file_from, "rb");
if (src == NULL) 
{
perror("Error opening source file");
exit(98);
}
FILE *dest = fopen(file_to, "wb");
if (dest == NULL) 
{
perror("Error opening destination file");
exit(99);
}
char *buffer = alloc_buffer(file_from);
size_t bytesRead;
while ((bytesRead = fread(buffer, 1, 1024, src)) > 0) 
{
if (fwrite(buffer, 1, bytesRead, dest) != bytesRead) 
{
perror("Error writing to destination file");
exit(99);
}
}
if (ferror(src)) 
{
perror("Error reading from source file");
exit(98);
}
free(buffer);
shutdown_file(src);
shutdown_file(dest);
return (0);
}
int main(int argc, char *argv[]) 
{
return (file_copy(argc, argv));
}
