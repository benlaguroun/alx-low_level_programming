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
FILE *file = fopen(filename, "a");
if (file == NULL)
return (-1);
if (text_content != NULL) 
{
if (fputs(text_content, file) == EOF) 
{
fclose(file);
return (-1);
}
}
fclose(file);
return (1);
}
