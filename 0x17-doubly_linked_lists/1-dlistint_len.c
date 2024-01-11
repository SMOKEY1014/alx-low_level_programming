#include "lists.h"
/**
 * dlistint_len - counts and returns num elements in doubly linked list
 * @h: pointer to head of list
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
    const dlistint_t *current = h;
    size_t count = 0;

    while (current != NULL) {
        current = current->next;
        count++;
    }

    return count;
}