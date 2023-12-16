#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Search for a value in a sorted array using the Jump search algorithm.
 * @array: Pointer to the input array (assumed to be sorted in ascending order).
 * @size: Size of the array.
 * @value: Value to search for.
 * Return: Index of the value if found, otherwise -1.
 * Description: Jump search is an algorithm for finding the position of a particular
 * element in a sorted array. It works by dividing the array into blocks, then jumping
 * through these blocks to find the range in which the value might exist. Finally, a
 * linear search is performed within that range to determine the exact index.
 */

int jump_search(int *array, size_t size, int value)
{
	int index, m, k, prev;

	if (array == NULL || size == 0)
		return (-1);

	m = (int)sqrt((double)size);
	k = 0;
	prev = index = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index);
		k++;
		prev = index;
		index = k * m;
	} while (index < (int)size && array[index] < value);

	printf("Value found between indexes [%d] and [%d]\n", prev, index);

	for (; prev <= index && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}
