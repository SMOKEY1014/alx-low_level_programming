#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Returning the num of elements in a linked list
 * @h: The pointer to the list_t list
 *
 * Return: x returns the number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}
	return (x);
}
