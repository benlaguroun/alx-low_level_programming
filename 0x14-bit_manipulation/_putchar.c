#include "main.h"
#include <unistd.h>
/**
 * custom_putchar - Writes a character to the standard output (stdout).
 * @c: The character to be printed.
 *
 * This function prints a single character to the standard output (stdout).
 * It returns 1 on success and -1 on failure, setting errno appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

