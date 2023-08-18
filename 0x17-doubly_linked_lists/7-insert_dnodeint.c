#include "lists.h"

/**
 *add_dnodeint_at_index - appends a fresh node at the specified position
 *within the list
 *@h: starting node of the list
 *@idx: index for the new node
 *@n: value held by the new node
 *Return: address of the new node, or NULL if insertion failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n) 
{
    dlistint_t *new_node;
    dlistint_t *current_node;
    unsigned int current_index;

    new_node = NULL;

    if (idx == 0)
        new_node = add_dnodeint(h, n);
    else 
    {
        current_node = *h;
        current_index = 1;

        if (current_node != NULL)
            while (current_node->prev != NULL)
                current_node = current_node->prev;

        while (current_node != NULL) 
	{
            if (current_index == idx) 
	    {
                if (current_node->next == NULL)
                    new_node = add_dnodeint_end(h, n);
                else 
		{
                    new_node = malloc(sizeof(dlistint_t));
                    if (new_node != NULL) 
		    {
                        new_node->n = n;
                        new_node->next = current_node->next;
                        new_node->prev = current_node;
                        current_node->next->prev = new_node;
                        current_node->next = new_node;
                    }
                }
                break;
            }
            current_node = current_node->next;
            current_index++;
        }
    }

    return (new_node);
}
