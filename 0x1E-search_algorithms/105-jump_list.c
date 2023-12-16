#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Search for a value in a singly linked list using the Jump search algorithm.
 * @list: Pointer to the input linked list (assumed to be sorted in ascending order).
 * @size: Number of nodes in the linked list.
 * @value: Value to search for.
 * Return: Index of the value if found, otherwise -1.
 * Description: jump_list function implements the Jump search algorithm on a singly linked
 * list. It divides the linked list into blocks, then jumps through these blocks to find
 * the range in which the value might exist. Finally, a linear search is performed within
 * that range to determine the exact index of the target value.
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t index, k, m;
	listint_t *prev;

	if (list == NULL || size == 0)
		return (NULL);

	m = (size_t)sqrt((double)size);
	index = 0;
	k = 0;

	do {
		prev = list;
		k++;
		index = k * m;

		while (list->next && list->index < index)
			list = list->next;

		if (list->next == NULL && index != list->index)
			index = list->index;

		printf("Value checked at index [%d] = [%d]\n", (int)index, list->n);

	} while (index < size && list->next && list->n < value);

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)prev->index, (int)list->index);

	for (; prev && prev->index <= list->index; prev = prev->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)prev->index, prev->n);
		if (prev->n == value)
			return (prev);
	}

	return (NULL);
}

