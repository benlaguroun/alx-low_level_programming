#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring containing accepted characters.
 * @s: The initial segment to search.
 * @accept: The string containing accepted characters.
 *
 * Return: The number of characters in `s` that are in the set of accepted characters.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		k = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				k = 0;
				break;
			}
		}
		if (k == 1)
			break;
	}
	return (i);
}
