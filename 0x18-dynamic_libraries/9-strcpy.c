#include "main.h"

/**
 * _strcpy - Copy the string pointed to by src to the buffer pointed to by dest.
 * @dest: A char pointer to the destination buffer.
 * @src: A const char pointer to the source string.
 *
 * Description: This function copies the string pointed to by `src` to the buffer
 * pointed to by `dest`, including the null-terminating character.
 *
 * Return: A pointer to `dest`.
 */
char *_strcpy(char *dest, char *src)
{
	int index = -1;

	do {
		index++;
		dest[index] = src[index];
	} while (src[index] != '\0');

	return (dest);
}
