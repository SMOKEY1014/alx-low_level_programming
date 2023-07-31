#include <stdlib.h>
#include "main.h"

/**
 * delete_nodeint_at_index() - This function eliminates the given index node in a listint_t list.
 *
 * @head: Points to the pointer to the head of the list.
 *
 * @index: Node index that should be deleted, starting at 0.
 *
 * Return: 1 for deletion succeeded, -1 for failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		listint_t *temporary = *head;
		*head = (*head)->next;
		free(temporary);
		return 1;
	}

	listint_t *prv = *head;
	listint_t *cur = (*head)->next;
	unsigned int cnt = 1;

	while (cur != NULL)
	{
		if (cnt == index)
		{
			prv->next = cur->next;
			free(cur);
			return (1);
		}

		prv = cur;
		cur = cur->next;
		cnt++;
	}

	return (-1);
}
