#include "lists.h"
/**
 * print_dlistint - prints a doubly linked list
 * @h: Head of the list
 * Return: Number of items in the linked list
 */


size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}
	return (count);
}
