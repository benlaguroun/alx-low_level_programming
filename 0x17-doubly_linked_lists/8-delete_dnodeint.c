#include "lists.h"

/**
 * remove_dnodeint_at_index - removes the node at the specified index in a
 * dlistint_t linked list.
 *
 * @head: pointer to the list's initial node
 * @index: index of the node to be deleted
 * Return: 1 if successful, -1 if failed
 **/
int remove_dnodeint_at_index(dlistint_t **head, unsigned int index) 
{
    dlistint_t *current_node = *head;
    dlistint_t *previous_node = NULL;
    unsigned int current_index = 0;

    if (current_node != NULL)
        while (current_node->prev != NULL)
            current_node = current_node->prev;

    while (current_node != NULL) 
    {
        if (current_index == index) 
	{
            if (current_index == 0) 
	    {
                *head = current_node->next;
                if (*head != NULL)
                    (*head)->prev = NULL;
            }
	    else 
	    {
                previous_node->next = current_node->next;
                if (current_node->next != NULL)
                    current_node->next->prev = previous_node;
            }

            free(current_node);
            return (1);
        }
        previous_node = current_node;
        current_node = current_node->next;
        current_index++;
    }

    return (-1);
}
