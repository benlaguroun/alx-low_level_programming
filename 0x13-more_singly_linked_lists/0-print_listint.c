#include "lists.h"

/**
 * print_listint - prints a linked list
 * @h: pointer to first node
 *
 * Return: size of list
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	for (; h; h = h->next)
	{
		printf("%d\n", h->n);
		num++;
	}

	return (num);
}
