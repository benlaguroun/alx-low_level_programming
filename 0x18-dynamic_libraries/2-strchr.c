#include "main.h"

/**
 * _strchr - Locate a character in a string.
 * @s: The source string to search.
 * @c: The character to find in the string.
 *
 * Return: A pointer to the first occurrence of `c` in `s`, or NULL if not found.
 */
char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
	{
		a++;
	}

	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}

	return ('\0');
}
