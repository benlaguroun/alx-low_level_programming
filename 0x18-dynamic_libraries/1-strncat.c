#include "main.h"

/**
 * _strncat - Concatenates two strings with a specified maximum number of bytes.
 * @dest: The destination string.
 * @src: The source string to append to the destination.
 * @n: The maximum number of bytes to append from src.
 *
 * Return: A pointer to the destination string `dest`.
 */
char *_strncat(char *dest, char *src, int n)
{
	int space1 = 0, space2 = 0;

	while (*(dest + space1) != '\0')
	{
		space1++;
	}

	while (space2 < n)
	{
		*(dest + space1) = *(src + space2);
		if (*(src + space2) == '\0')
			break;
		space1++;
		space2++;
	}
	return (dest);
}
