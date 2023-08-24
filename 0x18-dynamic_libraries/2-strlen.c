#include "main.h"

/**
 * _strlen - Calculate the length of a string.
 * @s: A pointer to the string to check.
 *
 * Return: The length of the string (an integer).
 */
int _strlen(char *s)
{
int count = 0;
while (s[count])
	count++;

return (count);
}
