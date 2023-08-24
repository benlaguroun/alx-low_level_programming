#include "main.h"

/**
 * _strstr - Locate a substring within a string.
 * @haystack: The string to search.
 * @needle: The substring to find.
 *
 * Return: A pointer to the first occurrence of `needle` in `haystack`,
 *         or NULL if `needle` is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int a = 0, b = 0;

	while (haystack[a])
	{
		while (needle[b])
		{
			if (haystack[a + b] != needle[b])
			{
				break;
			}

			b++;
		}

		if (needle[b] == '\0')
		{
			return (haystack + a);
		}

		a++;
	}

	return ('\0');
}
