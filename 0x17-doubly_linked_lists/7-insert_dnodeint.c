#include "lists.h"

/**
 * insert_node - insert node at given index
 * @temp: ptr to nth position node in doubly linked list
 * @n: node data
 * Return: address of inserted node
 */


dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    unsigned int count;

    /* Create a new node */
    dlistint_t *new_node = malloc(sizeof(dlistint_t));
    dlistint_t *temp_node;
    if (new_node == NULL) 
    {
        /* Memory allocation failed */
        return NULL;
    }

    /* Initialize the new node */
    new_node->n = n;
    new_node->next = NULL;
    new_node->prev = NULL;

    /* If inserting at the beginning */
    if (idx == 0) 
    {
        new_node->next = *h;
        if (*h != NULL) 
        {
            (*h)->prev = new_node;
        }
        *h = new_node;
        return (new_node);
    }

    /* Traverse the list to find the node before the desired position */
    
    count = 0;

    temp_node = *h;
    while (temp_node != NULL && count < idx - 1)
    {
        temp_node = temp_node->next;
        count++;
    }

    /* Check if the desired position is reachable */
    if (temp_node == NULL)
    {
        free(new_node);
        return (NULL);
    }

    /* Insert the new node at the specified position */
    new_node->next = temp_node->next;
    new_node->prev = temp_node;
    if (temp_node->next != NULL)
    {
        temp_node->next->prev = new_node;
    }
    temp_node->next = new_node;

    return (new_node);
}
