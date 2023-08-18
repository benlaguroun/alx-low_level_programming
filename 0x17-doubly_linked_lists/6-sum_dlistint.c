#include "lists.h"

/**
 *calculate_dlistint_sum - computes the sum of all the data (n)
 *within a doubly linked list
 *@head: starting point of the list
 *Return: sum of the data values
*/
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
