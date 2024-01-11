#include "lists.h"


/**
 * add_dnodeint - add node to beginning of doubly linked list
 * @head: pointer to head of list
 * @n: node data
 * Return: address of new node, or Null if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    /* Create a new node */
    dlistint_t *new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL) 
    {
        /* Memory allocation failed */
        return NULL;
    }

    /* Initialize the new node */
    new_node->n = n;
    new_node->prev = NULL;

    /* Update pointers */
    if (*head != NULL) 
    {
        new_node->next = *head;
        (*head)->prev = new_node;
    } 
    else 
    {
        new_node->next = NULL;
    }

    /* Update the head pointer to point to the new node */
    *head = new_node;

    return (new_node);
}