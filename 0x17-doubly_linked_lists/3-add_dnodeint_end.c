#include "lists.h"

/**
 *add_dnodeint_end Function - Add Node at the End of a dlistint_t List
 *This function creates a new node with the provided value and adds it
 *at the end of a doubly linked list (dlistint_t).
 *@head: Pointer to the head of the list
 *@n: Value to be stored in the new node
 *@return: Address of the new element (new node)
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = new;
	}
	else
	{
		*head = new;
	}

	new->prev = h;

	return (new);
}
