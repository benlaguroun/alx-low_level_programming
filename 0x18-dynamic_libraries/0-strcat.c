#include "main.h"
/**
 * _strcat - Concatenates the source string to the destination string.
 * @dest: The destination string.
 * @src: The source string to append to the destination.
 *
 * Return: A pointer to the destination string `dest`.
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	while (*(dest + i))
		i++;
	while ((*(dest + i) = *(src + j)))
	{
		i++;
		j++;
	}
	return (dest);
}
