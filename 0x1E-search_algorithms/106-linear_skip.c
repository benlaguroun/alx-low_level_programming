#include "search_algos.h"

/**
 * linear_skip - Search for a value in a skip list.
 * @list: Pointer to the input skip list.
 * @value: Value to search for.
 * Return: Node containing the value if found, otherwise NULL.
 * Description: linear_skip function searches for a specific value in a skip list,
 * a data structure that allows for faster search operations. It navigates the
 * skip list horizontally and vertically to efficiently narrow down the search range
 * and then performs a linear search to find the exact node containing the target value.
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *go;

	if (list == NULL)
		return (NULL);

	go = list;

	do {
		list = go;
		go = go->express;
		printf("Value checked at index ");
		printf("[%d] = [%d]\n", (int)go->index, go->n);
	} while (go->express && go->n < value);

	if (go->express == NULL)
	{
		list = go;
		while (go->next)
			go = go->next;
	}

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)list->index, (int)go->index);

	while (list != go->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}

	return (NULL);
}

