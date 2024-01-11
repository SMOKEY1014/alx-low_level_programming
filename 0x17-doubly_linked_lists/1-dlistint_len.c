#include "lists.h"
/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
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