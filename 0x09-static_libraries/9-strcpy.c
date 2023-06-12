#include "main.h"
#include <stdlib.h> 

/**
* _strcpy - Copies the string pointed to by src to dest
* @dest: Destination buffer
* @src: Source string
* Return: Pointer to the destination string
*/
char *_strcpy(char *dest, const char *src)
{
	int length = 0;
	int i = 0;
	while (src[length] != '\0')
	{
		length++;
	}

	dest = malloc((length + 1) * sizeof(char));
	if (dest == NULL)
	{
		return NULL;
	}

	for (i = 0; i < length; i++)
	{
		dest[i] = src[i];
	}
	dest[length] = '\0';

	return dest;
}
