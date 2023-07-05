#include "lists.h"

/**
 * get_nodeint_at_index - returns node at index
 * @head: pointer to first noe
 * @index: index of node to get
 *
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;

	for (unsigned int i = 0; temp; i++, temp = temp->next)
	{
		if (i == index)
			return (temp);
	}

	return (NULL);
}
