#include "lists.h"

/**
 * get_dnodeint_at_index - get a node at a specific index
 * @head: a node of a list
 * @index: given index of node
 * Return: the nth node of a list, NULL if it doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	/* Traverse the list to find the nth node */
	dlistint_t *current;
	unsigned int count;

	count = 0;
	current = head;


	while (current != NULL)
	{
		if (count == index)
		{
			/* Found the nth node, return it */
			return (current);
		}
		current = current->next;
		count++;
	}

	/* Node at the given index does not exist */
	return (NULL);
}
