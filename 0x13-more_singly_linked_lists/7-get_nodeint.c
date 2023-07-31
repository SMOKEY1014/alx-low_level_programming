#include <stddef.h>
#include "main.h"

/**
 * get_nodeint_at_index() - Finds and returns the nth node of the linked list.
 *
 * @head: Points to the head of the list.
 *
 * @index: node index, starting at 0.
 *
 * Return: nth node prt, or NULL if the node does not exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *cur = head;
	unsigned int cnt = 0;

	while (cur != NULL)
	{
		if (cnt == index)
		{
			return (cur);
		}
		cur = cur->next;
		cnt++;
	}

	return (NULL);
}
