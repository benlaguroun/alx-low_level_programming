#include "main.h"

/**
 * _islower - Checks for a lowercase character.
 * @c: The character being tested.
 *
 * Return: 1 if `c` is a lowercase letter, 0 otherwise.
 */
int _islower(int c)
{
	if  (c >= 97 && c <= 122)
		return (1);
	else
		return (0);

}
