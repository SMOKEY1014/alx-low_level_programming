#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at given idx
 * @head: pointer to head of doubly linked list
 * @index: index of node to be deleted
 * Return: 1 if successful, -1 if failed
 */


int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    unsigned int count;

    dlistint_t *temp, *current;

    /* Check if head is NULL */
    if (*head == NULL)
        return -1;

    /* If deleting the first node */
    if (index == 0)
    {
        temp = *head;
        *head = (*head)->next;
        if (*head != NULL)
            (*head)->prev = NULL;
        free(temp);
        return 1;
    }

    count = 0;
    current = *head;

    while (current != NULL && count < index)
    {
        current = current->next;
        count++;
    }

    /* Check if index is out of bounds */
    if (current == NULL)
        return (-1);

    /* Adjust the pointers to skip the node at the specified index */
    current->prev->next = current->next;
    
    if (current->next != NULL)
        current->next->prev = current->prev;

    /* Free the memory of the deleted node */
    free(current);

    return (1);
}
