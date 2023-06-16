#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc and exit if faild
 * @b: int
 * Return: pointer to the array initialized 
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}

