#include "lists.h"


/**
 *fetch_dnodeint_at_index - retrieves the node at the specified index in a dlistint_t linked list.
 *@head: pointer to the list's initial node
 *@index: index of the desired node, starting from 0
 *Returns: the node at the index, or null if not found
**/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size;
	dlistint_t *tmp;

	size = 0;
	if (head == NULL)
	return (NULL);

	tmp = head;
	while (tmp)
	{
	if (index == size)
	return (tmp);
	size++;
	tmp = tmp->next;
	}
	return (NULL);
}
