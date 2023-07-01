#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a node to the end of the list
 * @head: address of pointer to head node
 * @str: str field of node
 * Return: size of list
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new = malloc(sizeof(list_t));
if (!new)
return (NULL);
new->str = strdup(str);
if (!new->str)
{
free(new);
return (NULL);
}
new->len = strlen(str);
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
list_t *temp = *head;
while (temp->next != NULL)
temp = temp->next;
temp->next = new;
return (new);
}
