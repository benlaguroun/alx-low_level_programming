#include "lists.h"

/**
 *add_dnodeint Function - Add Node at the Beginning of a dlistint_t List
 *This function creates a new node with the provided value and adds it
 *at the beginning of a doubly linked list (dlistint_t).
 *@head: Pointer to the head of the list
 *@n: Value to be stored in the new node
 *@return: Address of the new element (new node)
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	new->next = h;

	if (h != NULL)
		h->prev = new;

	*head = new;

	return (new);
}
