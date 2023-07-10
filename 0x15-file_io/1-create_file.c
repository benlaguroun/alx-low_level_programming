#include "main.h"

/**
 * get_text_length - Calculates the length of a string.
 * @str: The input string.
 *
 * Return: The length of the string.
 */
size_t get_text_length(const char *str)
{
	size_t length = 0;

	if (str != NULL)
	{
		while (str[length])
			length++;
	}

	return (length);
}

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, const char *text_content)
{
	int fd, w;
	size_t len = get_text_length(text_content);

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	w = write(fd, text_content, len);
	if (w == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);

	return (1);
}
