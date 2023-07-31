#include "lists.h"
#include <stddef.h>

/**
 * listint_len() - It returns the num of elements of a listint_t list.
 *
 * @h: Pointer that points to the head of the list.
 *
 * Return: returning the num of elements (nodes) in the listint_t list.
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t nodeCounter = 0;

	while (h != NULL)
	{
		h = h->next;
		nodeCounter++;
	}

	return (nodeCounter);
}
