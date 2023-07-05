#include "lists.h"

/**
 * free_listint2 - frees a list of ints
 * @head: address of pointer to first node
 * Return: void 
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *temp;

	if (head == NULL)
		return;

	current = *head;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}

	*head = NULL;
}
