#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index() - This function eliminates the given index node in
 *  a listint_t list.
 *
 * @head: Points to the pointer to the head of the list.
 *
 * @index: Node index that should be deleted, starting at 0.
 *
 * Return: 1 for deletion succeeded, -1 for failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temporary;
	listint_t *prv;
	listint_t *cur;
	unsigned int cnt = 1;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		temporary = *head;
		*head = temporary->next;
		free(temporary);
		return (1);
	}

	prv = *head;
	cur = (*head)->next;


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
