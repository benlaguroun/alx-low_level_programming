#include "search_algos.h"

/**
 * Perform linear search to find the index of a value in an array.
 * @param array The input array.
 * @param size  The size of the array.
 * @param value The value to search for.
 * return The index of the value if found, otherwise -1.
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
