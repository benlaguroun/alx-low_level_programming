#include "lists.h"

/**
 *release_dlistint - releases memory occupied by a dlistint_t list.
 *@head: pointer to the starting point of the list
 *Returns: void
**/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return;

	while (head->next)
	{
	head = head->next;
	free(head->prev);
	}
	free(head);
}
