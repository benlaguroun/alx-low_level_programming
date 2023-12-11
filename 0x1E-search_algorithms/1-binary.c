#include "search_algos.h"

/**
 * recursive_binary_search - searches for a value in a sorted array of
 * integers using the Binary search algorithm
 *
 * @array: input array (assumed to be sorted in ascending order)
 * @start: starting index of the search range
 * @end: ending index of the search range
 * @value: value to search for
 * Return: index of the value if found, otherwise -1
 */

int recursive_search(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
		return ((int)half);

	if (value < array[half])
		return (recursive_search(array, half, value));

	half++;

	return (recursive_search(array + half, size - half, value) + half);
}

/**
 * binary_search - searches for a value in a sorted array of
 * integers using the Binary search algorithm
 *
 * @array: input array (assumed to be sorted in ascending order)
 * @size: size of the array
 * @value: value to search for
 * Return: index of the value if found, otherwise -1
 */

int binary_search(int *array, size_t size, int value)
{
	int index;

	index = recursive_search(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
