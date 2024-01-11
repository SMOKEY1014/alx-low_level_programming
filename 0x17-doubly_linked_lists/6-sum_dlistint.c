#include "lists.h"
/**
 * sum_dlistint - get sum of data(n) in doubly linked list
 * @head: pointer to head of doubly linked list
 * Return: Sum, or 0 if list is empty.
 */


int sum_dlistint(dlistint_t *head)
{
    /* Traverse the list */
    int sum = 0;
    
    dlistint_t *current;
    current = head;

    
    if (head == NULL)
    {
        return (sum);
    }
    else 
    {
        while (current != NULL) 
        {
            sum += current->n;    
            current = current->next;
        }
    }

    return (sum);
}