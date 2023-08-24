#include "main.h"

/**
 * _isalpha - Checks if a character is a letter (uppercase or lowercase).
 * @c: The integer to be tested.
 *
 * Return: 1 if `c` is a letter, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
