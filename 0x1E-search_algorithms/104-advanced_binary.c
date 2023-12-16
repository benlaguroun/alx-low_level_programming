#include "search_algos.h"

/**
 * rec_search - Search for a value in a sorted array using the Binary search algorithm.
 *
 * @array: Pointer to the input array (assumed to be sorted in ascending order).
 * @size: Size of the array.
 * @value: Value to search for.
 *
 * Return: Index of the value if found, otherwise -1.
 *
 * Description: Binary search is a divide-and-conquer algorithm that efficiently finds
 * the position of a specific element in a sorted array. It compares the target value
 * to the middle element of the array and narrows down the search range based on the
 * result. The process is repeated until the target value is found or the search range
 * becomes empty.
 */

int rec_search(int *array, size_t size, int value)
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
	{
		if (half > 0)
			return (rec_search(array, half + 1, value));
		return ((int)half);
	}

	if (value < array[half])
		return (rec_search(array, half + 1, value));

	half++;
	return (rec_search(array + half, size - half, value) + half);
}

/**
 * advanced_binary - Search for a value in a sorted array using the Binary search algorithm.
 *                  Calls the rec_search function for recursive binary search.
 * @array: Pointer to the input array (assumed to be sorted in ascending order).
 * @size: Size of the array.
 * @value: Value to search for.
 * Return: Index of the value if found, otherwise -1.
 * Description: advanced_binary function is a wrapper that calls the rec_search function,
 * which implements the Binary search algorithm. This function facilitates the usage of
 * the binary search and returns the index of the target value if found in the array.
 */
int advanced_binary(int *array, size_t size, int value)
{
	int index;

	index = rec_search(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
