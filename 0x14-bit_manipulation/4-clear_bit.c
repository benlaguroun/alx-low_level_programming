#include "main.h"

/**
 * clear_bit - Clears the value of a specified bit, setting it to 0.
 * @n: A pointer to the number whose bit will be cleared.
 * @index: The index of the bit to clear.
 *
 * Return: 1 for success, -1 for failure.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

