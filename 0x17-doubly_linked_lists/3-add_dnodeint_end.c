#include "lists.h"

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    /* Create a new node */
    dlistint_t *new_node = malloc(sizeof(dlistint_t));
    dlistint_t *temp_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL) {
        /* Memory allocation failed */
        return NULL;
    }

    /* Initialize the new node */
    new_node->n = n;
    new_node->next = NULL;

    /* If the list is empty, set the new node as the head */
    if (*head == NULL) {
        new_node->prev = NULL;
        *head = new_node;
        return *head;
    }

    /* Traverse the list to find the last node */
    *temp_node = **head;
    while (temp_node->next != NULL) {
        temp_node = temp_node->next;
    }

    /* Add the new node to the end of the list */
    temp_node->next = new_node;
    new_node->prev = temp_node;

    return *head;
}
