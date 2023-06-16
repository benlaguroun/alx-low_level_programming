#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: starting int
 * @max: max int
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
if (min > max)
return (NULL);

int size = max - min + 1;
int *ptr = malloc(sizeof(int) * size);

if (ptr == NULL)
return (NULL);

int *temp = ptr;
for (int i = min; i <= max; i++)
*temp++ = i;

return (ptr);
}
