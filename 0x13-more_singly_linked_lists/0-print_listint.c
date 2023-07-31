#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_listint - It Prints all the elements of the listint_t list.
 *
 * @h: Pointer that points to the head of the listint_t list.
 *
 * Return: Returns The number of nodes in the listint_t list.
 *
 */
size_t print_listint(const listint_t *h)
{
	size_t nodeCounter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodeCounter++;
	}

	printf("\n");
	return (nodeCounter);
}

