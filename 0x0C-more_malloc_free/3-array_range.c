#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: starting int
 * @max: max int
 * Return: pointer to the new array
 */
#include <stdlib.h>
#include "main.h"

int *array_range(int min, int max)
{
if (min > max)
	return (NULL);

int size = max - min + 1;
int *ptr = malloc(sizeof(int) * size);

if (ptr == NULL)
	return (NULL);

for (int i = 0; i < size; i++)
	ptr[i] = min++;

return (ptr);
}

