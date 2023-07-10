#include "main.h"

/**
 * append_text_to_file - Appends text to a file.
 * @filename: name of file to create.
 * @text_content: text to write.
 *
 * Return: 1 on success 0 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	if (filename == NULL)
		return (-1);
	int result = -1;  
	FILE *file = fopen(filename, "a");  
	if (file != NULL)
	{
		if (text_content != NULL)
		{
			int len = 0;
			while (text_content[len])
				len++;
			size_t bytes_written = fwrite(text_content, sizeof(char), len, file);
			if (bytes_written == (size_t)len)
				result = 1;  
		}
		else
		{
			result = 1;  
		}
		fclose(file);  
	}
	return (result);
}
