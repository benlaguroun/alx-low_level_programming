#include "lists.h"

/**
 *dlistint_len Function - Count Elements in a Double Linked List
 *This function calculates and returns the count of elements
 *present in a double linked list starting from the given head node.
 *@h: Head node of the list
 *@return: The number of nodes in the list
*/
size_t dlistint_len(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
