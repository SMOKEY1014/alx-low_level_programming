#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - This function eliminates the given index node in
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
	listint_t *tempo;
	listint_t *prv;
	prv = *head;
	listint_t *cur;
	listint_t *cur2 = NULL;
	unsigned int cnt = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		tempo = *head;
		*head = tempo->next;
		free(tempo);
		return (1);
	}

	while (cnt < index - 1)
	{
		cur = prv->next;
		if (!prv || !cur)
		{
			return(-1);
		}

		prv = cur;
		cnt++;
	}
	cur2 = prv->next;
	prv->next = cur2->next;
	free(cur2);

	return (1);
}
