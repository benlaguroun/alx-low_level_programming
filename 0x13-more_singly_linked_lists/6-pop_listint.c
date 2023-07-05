#include "lists.h"

/**
 * pop_listint - pops head node of list
 * @head: adress of pointer to first node
 *
 * Return: value of popped node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}

