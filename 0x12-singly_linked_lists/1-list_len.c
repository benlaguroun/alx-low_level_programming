#include <stdlib.h>
#include "lists.h"

/**
 * list_len - determines length of linked list
 * @h: pointer to the first node
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}

