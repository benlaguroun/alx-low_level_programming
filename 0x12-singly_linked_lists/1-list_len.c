#include <stdlib.h>
#include "lists.h"

/**
 * list_len - determines length of linked list
 * @h: pointer to the first node
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
if (h == NULL)
return (0);
size_t count = 0;
const list_t *current = h;
while (current != NULL)
{
count++;
current = current->next;
}
return (count);
}
