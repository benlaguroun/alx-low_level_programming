#include "lists.h"

/**
 *print_dlistint Function - Print Elements of a dlistint_t List
 *This function prints all the elements of a doubly linked
 *list (dlistint_t) starting from the provided head node.
 *@h: Head node of the list
 *@return: The number of nodes in the list
*/
size_t print_dlistint(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
