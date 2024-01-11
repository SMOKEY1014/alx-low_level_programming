#include "lists.h"
/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */


size_t print_dlistint(const dlistint_t *h) 
{
    const dlistint_t *current = h;
    size_t count = 0;

    while (current != NULL) {
        printf("%d\n", current->n);
        current = current->next;
        count++;
    }

    return count;
}


