#include <stdio.h>
#include "lists.h"

/**
 * print_list - The printer that prints all the elements of a linked list.
 * @h: Points to the list_t list to print.
 *
 * Return: Returns the num of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t size = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		size++;
	}

	return (size);
}

